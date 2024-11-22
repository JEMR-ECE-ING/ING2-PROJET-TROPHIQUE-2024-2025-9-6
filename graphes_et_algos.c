//
// Created by User on 11/13/2024.
//

#include "graphes_et_algos.h"

int lire_noeuds(const char *nom_fichier, noeud **noeuds) {
    FILE *file = fopen(nom_fichier, "r");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier des noeuds\n");
        return -1;
    }

    char line[256];
    int count = 0;


    if (fgets(line, sizeof(line), file) == NULL) {
        fclose(file);
        return 0;
    }


    *noeuds = (noeud *)malloc(sizeof(noeud) * 100);
    if (*noeuds == NULL) {
        perror("Erreur d'allocation de mémoire pour les noeuds\n");
        fclose(file);
        return -1;
    }


    while (fgets(line, sizeof(line), file)) {
        noeud node;
        char *token = strtok(line, ",");
        if (token != NULL) {
            node.id = atoi(token);
            token = strtok(NULL, ",");
            if (token != NULL) {
                strncpy(node.label, token, sizeof(node.label) - 1);
                node.label[strcspn(node.label, "\n")] = '\0';
                (*noeuds)[count++] = node;
            }
        }
    }

    fclose(file);
    return count;
}


int lire_arcs(const char *nom_fichier, arc **arcs) {
    FILE *file = fopen(nom_fichier, "r");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier des arcs\n");
        return -1;
    }

    char line[256];
    int count = 0;


    if (fgets(line, sizeof(line), file) == NULL) {
        fclose(file);
        return 0;
    }


    *arcs = (arc *)malloc(sizeof(arc) * 100);
    if (*arcs == NULL) {
        perror("Erreur d'allocation de memoire pour les arcs\n");
        fclose(file);
        return -1;
    }


    while (fgets(line, sizeof(line), file)) {
        arc edge;
        char *token = strtok(line, ",");
        if (token != NULL) {
            edge.source = atoi(token);
            token = strtok(NULL, ",");
            if (token != NULL) {
                edge.cible = atoi(token);
                (*arcs)[count++] = edge;
            }
        }
    }

    fclose(file);
    return count;
}


graphe creer_graphe(noeud *noeuds, int nb_noeuds, arc *arcs, int nb_arcs) {
    graphe g;
    g.noeuds = noeuds;
    g.ordre = nb_noeuds;
    g.arcs = arcs;
    g.nb_arcs = nb_arcs;
    return g;
}
//Trouver un label associe a un Id
const char *trouver_label(const graphe *g, int id) {
    for (int i = 0; i < g->ordre; i++) {
        if (g->noeuds[i].id == id) {
            return g->noeuds[i].label;
        }
    }
    return "Inconnu"; // Retourne "Inconnu" si l'ID n'existe pas
}

void afficher_graphe(const graphe *g) {
    printf("Graphe :\n");
    printf("Noeuds (%d):\n", g->ordre);
    for (int i = 0; i < g->ordre; i++) {
        printf("  Id: %d, Label: %s\n", g->noeuds[i].id, g->noeuds[i].label);
    }

    printf("Arcs (%d):\n", g->nb_arcs);
    for (int i = 0; i < g->nb_arcs; i++) {
        const char *source_label = trouver_label(g, g->arcs[i].source);
        const char *cible_label = trouver_label(g, g->arcs[i].cible);
        printf("  %s -> %s\n", source_label, cible_label);
    }
    printf("\n");
}


// Afficher les successeurs d'un noeud
void afficher_successeurs(const graphe *g, int id_noeud) {
    printf("Successeurs de %s:\n", trouver_label(g, id_noeud));
    for (int i = 0; i < g->nb_arcs; i++) {
        if (g->arcs[i].source == id_noeud) {
            printf("  -> %s\n", trouver_label(g, g->arcs[i].cible));
        }
    }
}

//Afficher les predecesseurs d'un noeud
void afficher_predecesseurs(const graphe *g, int id_noeud) {
    printf("Predecesseurs de %s:\n", trouver_label(g, id_noeud));
    for (int i = 0; i < g->nb_arcs; i++) {
        if (g->arcs[i].cible == id_noeud) {
            printf("  <- %s\n", trouver_label(g, g->arcs[i].source));
        }
    }
}

void afficher_successeurs_et_predecesseurs(const graphe *g) {
    for (int i = 0; i < g->ordre; i++) {
        int id_noeud = g->noeuds[i].id;
        afficher_successeurs(g, id_noeud);
        afficher_predecesseurs(g, id_noeud);
    }
}

// Calculer la densité des liaisons
float calculer_densite(const graphe *g) {
    float max_arcs = g->ordre * (g->ordre - 1); // Graphe oriente
    return g->nb_arcs / max_arcs;
}

// Calculer la hauteur trophique (via DFS)
int calculer_hauteur_trophique_rec(const graphe *g, int id_noeud, int *visited) {
    if (visited[id_noeud - 1]) return 0; // Retourne 0 si deja visite
    visited[id_noeud - 1] = 1;

    int max_hauteur = 0;
    for (int i = 0; i < g->nb_arcs; i++) {
        if (g->arcs[i].source == id_noeud) {
            int hauteur = calculer_hauteur_trophique_rec(g, g->arcs[i].cible, visited);
            if (hauteur > max_hauteur) {
                max_hauteur = hauteur;
            }
        }
    }
    visited[id_noeud - 1] = 0; // Réinitialise après visite
    return 1 + max_hauteur;
}

int calculer_hauteur_trophique(const graphe *g) {
    int max_hauteur = 0;
    int *visited = (int *)calloc(g->ordre, sizeof(int)); // Pour éviter les cycles
    if (!visited) {
        perror("Erreur d'allocation pour calcul de la hauteur trophique");
        return -1;
    }

    for (int i = 0; i < g->ordre; i++) {
        int hauteur = calculer_hauteur_trophique_rec(g, g->noeuds[i].id, visited);
        if (hauteur > max_hauteur) {
            max_hauteur = hauteur;
        }
    }

    free(visited);
    return max_hauteur;
}

int lire_graphe(const char *fichier_noeuds, const char *fichier_arcs, graphe *g) {
    noeud *noeuds = NULL;
    arc *arcs = NULL;

    // Lire les noeuds
    int nb_noeuds = lire_noeuds(fichier_noeuds, &noeuds);
    if (nb_noeuds < 0) {
        fprintf(stderr, "Erreur lors de la lecture des noeuds depuis le fichier %s\n", fichier_noeuds);
        return -1;
    }

    // Lire les arcs
    int nb_arcs = lire_arcs(fichier_arcs, &arcs);
    if (nb_arcs < 0) {
        fprintf(stderr, "Erreur lors de la lecture des arcs depuis le fichier %s\n", fichier_arcs);
        free(noeuds); // Libérer les noeuds déjà lus
        return -1;
    }

    // Créer le graphe
    *g = creer_graphe(noeuds, nb_noeuds, arcs, nb_arcs);
    return 0; // Succès
}
