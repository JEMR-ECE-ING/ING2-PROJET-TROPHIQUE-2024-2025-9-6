//
// Created by User on 11/13/2024.
//

#include "sous_progs_varies.h"
#include "graphes_et_algos.h"

// Fonction pour le cas où l'utilisateur choisit "Commencer"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void application() {
    int retour;

    // Texte ASCII art
    const char *asciiArt[] = {
        "   ____ _  __ ______ ____ ___   ____ ___   _____ ____  ___    ___   ___   __    ____ _____ ___  ______ ____ ____   _  __",
        "  /  _// |/ //_  __// __// _ \\ / __// _ | / ___// __/ / _ |  / _ \\ / _ \\ / /   /  _// ___// _ |/_  __//  _// __ \\ / |/ /",
        " _/ / /    /  / /  / _/ / , _// _/ / __ |/ /__ / _/  / __ | / ___// ___// /__ _/ / / /__ / __ | / /  _/ / / /_/ //    / ",
        "/___//_/|_/  /_/  /___//_/|_|/_/  /_/ |_|\\___//___/ /_/ |_|/_/   /_/   /____//___/ \\___//_/ |_|/_/  /___/ \\____//_/|_/  "
    };
    int numLines = sizeof(asciiArt) / sizeof(asciiArt[0]);

    // Initialisation des couleurs pour le dégradé
    const int colors[] = {31, 33, 32, 36, 34, 35, 91, 93, 92, 96, 94, 95}; // Dégradé de couleurs ANSI
    int numColors = sizeof(colors) / sizeof(colors[0]);

    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires

    // Afficher l'ASCII art avec un dégradé de couleurs
    for (int i = 0; i < numLines; i++) {
        for (int j = 0; asciiArt[i][j] != '\0'; j++) {
            int colorIndex = (i + j) % numColors; // Cycler les couleurs
            printf("\033[1;%dm%c\033[0m", colors[colorIndex], asciiArt[i][j]); // Affiche chaque lettre avec une couleur
        }
        printf("\n"); // Saut de ligne après chaque ligne d'ASCII art
    }

    // Texte explicatif dans un encadré cyan avec texte rouge
    printf("\033[1;36m"); // Cyan pour l'encadré
    printf("*************************************************************************************************\n");
    printf("*                                                                                               *\n");
    printf("*\033[0;31m       --- Decouvrez les differents reseaux trophiques ---                                     \033[1;36m*\n");
    printf("*                                                                                               *\n");
    printf("*\033[0;31m       1. Choix du reseau                                                                      \033[1;36m*\n");
    printf("*\033[0;31m       2. Retour au menu principal                                                             \033[1;36m*\n");
    printf("*\033[0;31m       3. Quitter                                                                              \033[1;36m*\n");
    printf("*                                                                                               *\n");
    printf("*************************************************************************************************\n");
    printf("\033[0m"); // Réinitialisation des couleurs

    // Options utilisateur
    do {
        printf("\nVotre choix : ");
        scanf("%d", &retour);

        switch (retour) {
            case 1:
                system("cls");
                reseauTrophiqueManuel();
                break;
            case 2:
                system("cls"); // Efface l'écran pour retourner au menu principal
                return; // Retourne au menu principal
            case 3:
                exit(0); // Quitter l'application
            default:
                printf("\033[1;31mChoix invalide. Veuillez réessayer.\033[0m\n");
        }
    } while (retour != 2); // Continue tant que l'utilisateur ne demande pas de retourner au menu principal
}


// Fonction pour le cas où l'utilisateur choisit "Aide"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void aide() {
    int retour;

    // Texte ASCII art
    const char *asciiArt[] = {
        "   ____ _  __ ______ ____ ___   ____ ___   _____ ____  ___    ____ ___   ____",
        "  /  _// |/ //_  __// __// _ \\ / __// _ | / ___// __/ / _ |  /  _// _ \\ / __/",
        " _/ / /    /  / /  / _/ / , _// _/ / __ |/ /__ / _/  / __ | _/ / / // // _/  ",
        "/___//_/|_/  /_/  /___//_/|_|/_/  /_/ |_|\\___//___/ /_/ |_|/___//____//___/  "
    };
    int numLines = sizeof(asciiArt) / sizeof(asciiArt[0]);

    // Initialisation des couleurs
    const int colors[] = {31, 33, 32, 36, 34, 35, 91, 93, 92, 96, 94, 95}; // Dégradé de couleurs ANSI
    int numColors = sizeof(colors) / sizeof(colors[0]);

    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires

    // Afficher l'ASCII art avec un dégradé de couleurs
    for (int i = 0; i < numLines; i++) {
        for (int j = 0; asciiArt[i][j] != '\0'; j++) {
            int colorIndex = (i + j) % numColors; // Cycler les couleurs
            printf("\033[1;%dm%c\033[0m", colors[colorIndex], asciiArt[i][j]); // Affiche chaque lettre avec une couleur
        }
        printf("\n"); // Saut de ligne après chaque ligne d'ASCII art
    }

    // Texte explicatif dans un encadré
    printf("\033[1;31m"); // Rouge pour l'encadré
    printf("*****************************************************************************************************\n");
    printf("*                                                                                                   *\n");
    printf("*\033[0;33m          Nous mettrons en oeuvre des modeles de graphes representant des especes (animales,         \033[1;31m*\n");
    printf("*\033[0;33m          vegetales) ou reservoirs de ressources (lumiere, sol, eau, pature, foret) au niveau des    \033[1;31m*\n");
    printf("*\033[0;33m          sommets et les interactions entre ces ressources et populations (en termes d'echange de    \033[1;31m*\n");
    printf("*\033[0;33m          biomasse ou d'influences) au niveau des arcs (aretes orientees). Sur cette base le          \033[1;31m*\n");
    printf("*\033[0;33m          programme demande pourra permettre d'etudier des aspects structurels (connexite, forte     \033[1;31m*\n");
    printf("*\033[0;33m          connexite, k-connexite) et des aspects fonctionnels (dynamique des populations, dynamique   \033[1;31m*\n");
    printf("*\033[0;33m          des ressources).                                                                           \033[1;31m*\n");
    printf("*                                                                                                   *\n");
    printf("*\033[0;33m          1. Retour au menu principal                                                               \033[1;31m*\n");
    printf("*\033[0;33m          2. Quitter                                                                                \033[1;31m*\n");
    printf("*                                                                                                   *\n");
    printf("*****************************************************************************************************\n");
    printf("\033[0m"); // Réinitialisation des couleurs

    // Options utilisateur
    do {
        printf("\nVotre choix : ");
        scanf("%d", &retour);

        switch (retour) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour != 1 && retour != 2);
}


// Fonction pour afficher le menu principal
void displayMenu() {
    int choice;
    do {
        // Texte ASCII art avec dégradé
        const char *asciiArt[] = {
            "    ____                                           ______                     __     _                          ",
            "   / __ \\ ___   _____ ___   ____ _ __  __ _  __   /_  __/_____ ____   ____   / /_   (_)____ _ __  __ ___   _____",
            "  / /_/ // _ \\ / ___// _ \\ / __ `// / / /| |/_/    / /  / ___// __ \\ / __ \\ / __ \\ / // __ `// / / // _ \\ / ___/",
            " / _, _//  __/(__  )/  __// /_/ // /_/ /_>  <     / /  / /   / /_/ // /_/ // / / // // /_/ // /_/ //  __/(__  ) ",
            "/_/ |_| \\___//____/ \\___/ \\__,_/ \\__,_//_/|_|    /_/  /_/    \\____// .___//_/ /_//_/ \\__, / \\__,_/ \\___//____/  ",
            "                                                                  /_/                  /_/                      "
        };

        int colors[] = {31, 33, 32, 36, 34, 35, 91, 93, 92, 96, 94, 95}; // Couleurs ANSI
        int numColors = sizeof(colors) / sizeof(colors[0]);

        // Afficher chaque ligne de l'ASCII art
        for (int i = 0; i < 6; i++) {
            for (int j = 0; asciiArt[i][j] != '\0'; j++) {
                int colorIndex = (i + j) % numColors; // Index cyclique pour les couleurs
                printf("\033[1;%dm%c\033[0m", colors[colorIndex], asciiArt[i][j]);
            }
            printf("\n"); // Saut de ligne après chaque ligne d'ASCII art
        }

        // Texte en dessous de l'ASCII art
        const char *borderColor = "\033[1;35m"; // Violet pour l'encadré
        const char *textColor = "\033[1;33m";   // Orange pour le texte
        const char *resetColor = "\033[0m";     // Réinitialisation des couleurs

        // Dessiner l'encadré
        printf("%s", borderColor); // Bordure violette
        printf("****************************************************\n");
        printf("*                                                  *\n");
        printf("*%s          En souvenir de Robin Fercoq             %s*\n", textColor, borderColor);
        printf("*%s          Bienvenue dans le repertoire            %s*\n", textColor, borderColor);
        printf("*%s          des Reseaux Trophiques                  %s*\n", textColor, borderColor);
        printf("*                                                  *\n");
        printf("*%s          1. Commencer                            %s*\n", textColor, borderColor);
        printf("*%s          2. Aide                                 %s*\n", textColor, borderColor);
        printf("*%s          3. Quitter l'interface                  %s*\n", textColor, borderColor);
        printf("*                                                  *\n");
        printf("****************************************************\n");
        printf("%s", resetColor); // Réinitialisation des couleurs

        // Saisie utilisateur
        printf("\nVotre choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                application();
                break;
            case 2:
                system("cls");
                aide();
                break;
            case 3:
                printf("Au revoir !\n");
                exit(0);
            default:
                printf("Option invalide. Veuillez choisir de nouveau.\n");
        }
    } while (1); // Boucle infinie pour réafficher le menu principal après chaque retour
}

void connexite() {
    int retourA;
    do {
        printf("--- Connexite ---\n\n");
        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourA);

        switch (retourA) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourA != 1 && retourA != 2);
}


void rechercheSommets() {
    int retourB;
    do {
        printf("--- Recherche Sommets ---\n\n");
        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourB);

        switch (retourB) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourB != 1 && retourB != 2);
}

void afficherSuccesseursPredecesseursMenu(const graphe *g) {
    int retourE;
    do {
        printf("--- Affichage des successeurs et predecesseurs ---\n\n");

        // Parcourt tous les noeuds et affiche leurs successeurs et prédécesseurs
        for (int i = 0; i < g->ordre; i++) {
            int id_noeud = g->noeuds[i].id;

            // Affiche les prédécesseurs en vert
            printf("\033[1;32m"); // Définit la couleur du texte en vert
            printf("Predecesseurs de %s:\n", trouver_label(g, id_noeud));
            for (int j = 0; j < g->nb_arcs; j++) {
                if (g->arcs[j].cible == id_noeud) {
                    printf("  <- %s\n", trouver_label(g, g->arcs[j].source));
                }
            }

            // Affiche les successeurs en rouge
            printf("\033[1;31m"); // Définit la couleur du texte en rouge
            printf("Successeurs de %s:\n", trouver_label(g, id_noeud));
            for (int j = 0; j < g->nb_arcs; j++) {
                if (g->arcs[j].source == id_noeud) {
                    printf("  -> %s\n", trouver_label(g, g->arcs[j].cible));
                }
            }

            // Réinitialise la couleur et ajoute un séparateur pour plus de lisibilité
            printf("\033[0m"); // Réinitialise la couleur du texte
            printf("---------------------------------------\n");
        }

        // Menu d'options
        printf("          1. Retour au menu d'analyse\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourE);

        // Gère le choix de l'utilisateur
        switch (retourE) {
            case 1:
                system("cls");
                return; // Retourne au menu d'analyse
            case 2:
                exit(0); // Quitte l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourE != 1 && retourE != 2);
}

void niveauTrophique(graphe *g) {
    int retourC;
    do {
        printf("--- Niveaux trophiques ---\n\n");
        int resultat = calculer_hauteur_trophique(g);
        printf("\033[1;32m");
        printf("          HAUTEUR TROPHIQUE MAX: %d\n", resultat);
        printf("\033[0m");
        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourC);

        switch (retourC) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourC != 1 && retourC != 2);
}

void importanceRelative() {
    int retourD;
    do {
        printf("--- Importance Relative ---\n\n");
        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourD);

        switch (retourD) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourD != 1 && retourD != 2);
}

void dynamique() {
    int retourE;
    do {
        printf("--- Dynamique ---\n\n");
        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourE);

        switch (retourE) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourE != 1 && retourE != 2);
}

void densite(graphe *g) {
    int retourE;
    do {
        printf("--- Calcul de la densite ---\n\n");
        float resultat = calculer_densite(g);
        printf("\033[1;32m");
        printf("          DENSITE DU GRAPHE: %.2f\n", resultat);
        printf("\033[0m");
        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourE);

        switch (retourE) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourE != 1 && retourE != 2);
}

void afficherGrapheMenu(const graphe *g) {
    int retourE;
    do {
        printf("--- Affichage du graphe ---\n\n");

        // Display the graph
        printf("\033[1;34m"); // Set text color to blue
        afficher_graphe(g);
        printf("\033[0m");   // Reset text color

        printf("          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retourE);

        switch (retourE) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retourE != 1 && retourE != 2);
}

void reseauTrophiqueManuel() {
    graphe g; // Graphe structure to store the loaded graph
    int fichierValide = 0; // To track if the file was loaded successfully

    do {
        // Affichage dans un encadré rouge et texte en vert
        printf("\033[1;31m"); // Couleur rouge pour l'encadré
        printf("***********************************************************\n");
        printf("*                                                         *\n");
        printf("*\033[0;32m  --- RESEAUX MANUEL ---                                 \033[1;31m*\n");
        printf("*                                                         *\n");
        printf("*\033[0;32m  Entrez le numero du reseau trophique de votre choix :  \033[1;31m*\n");
        printf("*\033[0;32m    1 - Reseau1                                          \033[1;31m*\n");
        printf("*\033[0;32m    2 - Reseau2                                          \033[1;31m*\n");
        printf("*\033[0;32m    3 - Reseau3                                          \033[1;31m*\n");
        printf("*                                                         *\n");
        printf("***********************************************************\n");
        printf("\033[0m"); // Réinitialisation des couleurs

        printf("\nVotre choix : "); // Texte vert pour la saisie
        int choix;
        scanf("%d", &choix); // Lecture du choix de l'utilisateur

        switch (choix) {
            case 1:
                fichierValide = lire_graphe("data_rs/noeudsRS1.csv", "data_rs/arcsRS1.csv", &g) == 0;
            break;
            case 2:
                fichierValide = lire_graphe("data_rs/noeudsRS2.csv", "data_rs/arcsRS2.csv", &g) == 0;
            break;
            case 3:
                fichierValide = lire_graphe("data_rs/noeudsRS3.csv", "data_rs/arcsRS3.csv", &g) == 0;
            break;
            default:
                printf("Choix invalide. Veuillez entrer un numero entre 1 et 3.\n");
            continue; // Retour au début de la boucle
        }

        if (!fichierValide) {
            printf("Erreur : Impossible de charger les fichiers pour Reseau%d. Veuillez réessayer.\n", choix);
        } else {
            // INITIALISATION
            system("cls");
            printf("\033[1;32m");
            printf("    ___                                                   ___  ___ ___  _   __\n");
            printf("   / _/__ __ ____ ____ ____ ____ ____ ____ ____ ____ ____/  / <  // _ \\(_)_/_/\n");
            printf("  / /  \\ \\ //___//___//___//___//___//___//___//___//___// /  / // // / _/_/_ \n");
            printf(" / /  /_\\_\\                                            _/ /  /_/ \\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                     \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;31m");
            printf("    ___                                                   ___  ___  ___  _   __\n");
            printf("   / _/__ ____ __ ____ ____ ____ ____ ____ ____ ____ ____/  / |_  |/ _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ //___//___//___//___//___//___//___//___// / / __// // / _/_/_ \n");
            printf(" / /  /_\\_\\/_\\_\\                                       _/ / /____/\\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                      \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;32m");
            printf("    ___                                                   ___  ____ ___  _   __\n");
            printf("   / _/__ ____ ____ __ ____ ____ ____ ____ ____ ____ ____/  / |_  // _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ //___//___//___//___//___//___//___// / _/_ </ // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\                                    _/ / /____/\\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                      \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;31m");
            printf("    ___                                                   ___  ____  ___  _   __\n");
            printf("   / _/__ ____ ____ ____ __ ____ ____ ____ ____ ____ ____/  / / / / / _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ //___//___//___//___//___//___// / /_  _// // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\                                _/ /   /_/  \\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                       \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;32m");
            printf("    ___                                                   ___  ____ ___  _   __\n");
            printf("   / _/__ ____ ____ ____ ____ __ ____ ____ ____ ____ ____/  / / __// _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ //___//___//___//___//___// / /__ \\/ // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\                        _/ / /____/\\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                      \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;31m");
            printf("    ___                                                   ___  ____ ___  _   __\n");
            printf("   / _/__ ____ ____ ____ ____ ____ __ ____ ____ ____ ____/  / / __// _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ //___//___//___//___// / / _ \\/ // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\                    _/ /  \\___/\\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                      \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;32m");
            printf("    ___                                                   ___  ____ ___  _   __\n");
            printf("   / _/__ ____ ____ ____ ____ ____ ____ __ ____ ____ ____/  / /_  // _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ //___//___//___// /   / // // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\                _/ /   /_/ \\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                      \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;31m");
            printf("    ___                                                   ___  ___   ___  _   __\n");
            printf("   / _/__ ____ ____ ____ ____ ____ ____ ____ __ ____ ____/  / ( _ ) / _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ //___//___// / / _  |/ // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\            _/ /  \\___/ \\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                       \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;32m");
            printf("    ___                                                   ___  ___   ___  _   __\n");
            printf("   / _/__ ____ ____ ____ ____ ____ ____ ____ ____ __ ____/  / / _ \\ / _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ //___// /  \\_, // // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\        _/ /  /___/ \\___/ /_/ (_)\n");
            printf("/__/                                                  /__/                       \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;31m");
            printf("    ___                                                    ___  ___ ___   ___  _   __\n");
            printf("   / _/__ ____ ____ ____ ____ ____ ____ ____ ____ ____ __ /  / <  // _ \\ / _ \\(_)_/_/\n");
            printf("  / /  \\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ /\\ \\ / / /  / // // // // / _/_/_ \n");
            printf(" / /  /_\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\/\\_\\ _/ /  /_/ \\___/ \\___/ /_/ (_)\n");
            printf("/__/                                                   /__/                           \n");
            printf("\033[0m");
            sleep(1);
            system("cls");
            printf("\033[1;32m"); // Définit la couleur verte
            printf("\n\n              Fichier charge avec succes !\n\n\n");
            printf("\033[0m"); // Réinitialise la couleur par défa
            sleep(3);
            system("cls");
        }
    } while (!fichierValide); // Loop until a valid file is loaded

    // Once the file is validated, move to the analysis options
    int retour3;
    do {
        // Début de l'encadré rose
        printf("\033[1;35m"); // Couleur rose pour le cadre (bordures)
        printf("------------------------------------------------------\n");
        printf("| \033[1;36m  --- OPTIONS D'ANALYSE POUR LE RESEAU MANUEL ---  \033[1;35m |\n"); // Instructions en bleu clair
        printf("-------------------------------------------------------\n");
        printf("| \033[1;36m  1. Verification de la connexite du reseau         \033[1;35m|\n");
        printf("| \033[1;36m  2. Recherche des sommets particuliers             \033[1;35m|\n");
        printf("| \033[1;36m  3. Etude des niveaux trophiques                   \033[1;35m|\n");
        printf("| \033[1;36m  4. Importance relative des especes                \033[1;35m|\n");
        printf("| \033[1;36m  5. Dynamique des populations                      \033[1;35m|\n");
        printf("| \033[1;36m  6. Densite du graphe                              \033[1;35m|\n");
        printf("| \033[1;36m  7. Affichage du graphe                            \033[1;35m|\n");
        printf("| \033[1;36m  8. Affichage des successeurs et predecesseurs     \033[1;35m|\n");
        printf("| \033[1;36m  9. Retour au menu principal                       \033[1;35m|\n");
        printf("| \033[1;36m 10. Quitter                                        \033[1;35m|\n");
        printf("-------------------------------------------------------\n");

        // Réinitialisation de la couleur
        printf("\033[0m");

        // Saisie de l'utilisateur
        printf("Choix : ");
        scanf("%d", &retour3);

        switch (retour3) {
            case 1:
                system("cls");
                connexite();
                break;
            case 2:
                system("cls");
                rechercheSommets();
                break;
            case 3:
                system("cls");
                niveauTrophique(&g);
                break;
            case 4:
                system("cls");
                importanceRelative();
                break;
            case 5:
                system("cls");
                dynamique();
                break;
            case 6:
                system("cls");
                densite(&g);
                break;
            case 7:
                system("cls");
                afficherGrapheMenu(&g);
                break;
            case 8:
                system("cls");
                afficherSuccesseursPredecesseursMenu(&g);
                break;
            case 9:
                system("cls");
                // Liberation des resources
                free(g.noeuds);
                free(g.arcs);
                return;
            case 10:
                // Liberation des resources
                free(g.noeuds);
                free(g.arcs);
                exit(0);
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour3 != 9);

    //LIBERATION DES RESOURCES
    free(g.noeuds);
    free(g.arcs);
}
