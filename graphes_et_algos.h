//
// Created by User on 11/13/2024.
//

#ifndef ING2_PROJET_TROPHIQUE_2024_2025_9_6_GRAPHES_ET_ALGOS_H
#define ING2_PROJET_TROPHIQUE_2024_2025_9_6_GRAPHES_ET_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Strucutre d'un arc format source => cible
typedef struct{
    int source;
    int cible;
} arc;

//Strucutre du noeud, id avec label
typedef struct {
    int id;
    char label[50];
} noeud;

//Structure du graphe
typedef struct {
    noeud* noeuds;
    int ordre;
    arc* arcs;
    int nb_arcs;
} graphe;

//Fonction de lecture du fichier avec des noeuds
int lire_noeuds(const char* nom_ficher, noeud** noeuds);
//Fonction de lecture du fichier avec des arcs
int lire_arcs(const char* nom_fichier, arc** arcs);
//Fonction d'affichage CONSOLE du graphe
graphe creer_graphe(noeud *noeuds, int nb_noeuds, arc *arcs, int nb_arcs);
void afficher_graphe(const graphe *g);
float calculer_densite(const graphe *g);
void afficher_successeurs_et_predecesseurs(const graphe *g);
int calculer_hauteur_trophique(const graphe *g);
int lire_graphe(const char *fichier_noeuds, const char *fichier_arcs, graphe *g);
#endif //ING2_PROJET_TROPHIQUE_2024_2025_9_6_GRAPHES_ET_ALGOS_H
