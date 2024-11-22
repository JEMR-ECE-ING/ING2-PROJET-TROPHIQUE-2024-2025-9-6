//
// Created by User on 11/13/2024.
//

#include "sous_progs_varies.h"



void reseauTrophique1() {
    int retour1;
    do {
        printf("--- RESEAU TROPHIQUE 2---\n\n");
        printf("          Option 1\n");
        printf("          Option 2\n");
        printf("          Option 3\n");
        printf("          Option 4\n");
        printf("\n          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retour1);

        switch (retour1) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour1 != 1 && retour1 != 2);
}

void reseauTrophique2() {
    int retour2;
    do {
        printf("--- RESEAU TROPHIQUE 2 ---\n\n");
        printf("          Option 1\n");
        printf("          Option 2\n");
        printf("          Option 3\n");
        printf("          Option 4\n");
        printf("\n          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retour2);

        switch (retour2) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour2 != 1 && retour2 != 2);
}

void reseauTrophique3() {
    int retour3;
    do {
        printf("--- RESEAU TROPHIQUE 3 ---\n\n");
        printf("          Option 1\n");
        printf("          Option 2\n");
        printf("          Option 3\n");
        printf("          Option 4\n");
        printf("\n          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
        scanf("%d", &retour3);

        switch (retour3) {
            case 1:
                system("cls");
                return; // Retour au menu principal
            case 2:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour3 != 1 && retour3 != 2);
}

// Fonction pour le cas où l'utilisateur choisit "Commencer"
void application() {
    int retour;
    do {
        printf("   ____ _  __ ______ ____ ___   ____ ___   _____ ____  ___    ___   ___   __    ____ _____ ___  ______ ____ ____   _  __\n");
        printf("  /  _// |/ //_  __// __// _ \\ / __// _ | / ___// __/ / _ |  / _ \\ / _ \\ / /   /  _// ___// _ |/_  __//  _// __ \\ / |/ /\n");
        printf(" _/ / /    /  / /  / _/ / , _// _/ / __ |/ /__ / _/  / __ | / ___// ___// /__ _/ / / /__ / __ | / /  _/ / / /_/ //    / \n");
        printf("/___//_/|_/  /_/  /___//_/|_|/_/  /_/ |_|\\___//___/ /_/ |_|/_/   /_/   /____//___/ \\___//_/ |_|/_/  /___/ \\____//_/|_/  \n");
        printf("                                                                                                                        \n");
        printf("--- Decouvrez les differents reseaux trophiques ---\n\n");
        printf("          1. Tunisie \n");
        printf("          2. Tunis\n");
        printf("          3. Choisir le reseau manuellement _\n\n");
        printf("          4. Retour au menu principal\n");
        printf("          5. Quitter\n");
        printf("\nVotre choix : ");
        scanf("%d", &retour);

        switch (retour) {
            case 1:
                system("cls"); // Efface l'écran (Windows). Utilisez `system("clear")` sous Linux/Mac.
                reseauTrophique1();
                break;
            case 2:
                system("cls");
                reseauTrophique2();
                break;
            case 3:
                system("cls");
                reseauTrophiqueManuel();
                break;
            case 4:
                system("cls"); // Efface l'écran pour retourner au menu principal
                return; // Retourne au menu principal
            case 5:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour != 4); // Continue tant que l'utilisateur ne demande pas de retourner au menu principal}
}

// Fonction pour le cas où l'utilisateur choisit "Aide"
void aide() {
    int retour;
    do {
        printf("   ____ _  __ ______ ____ ___   ____ ___   _____ ____  ___    ____ ___   ____\n");
        printf("  /  _// |/ //_  __// __// _ \\ / __// _ | / ___// __/ / _ |  /  _// _ \\ / __/\n");
        printf(" _/ / /    /  / /  / _/ / , _// _/ / __ |/ /__ / _/  / __ | _/ / / // // _/  \n");
        printf("/___//_/|_/  /_/  /___//_/|_|/_/  /_/ |_|\\___//___/ /_/ |_|/___//____//___/  \n");
        printf("                                                                              \n");
        printf("          Nous mettrons en oeuvre des modeles de graphes representant des especes (animales,\n");
        printf("          vegetales) ou reservoirs de ressources (lumiere, sol, eau, pature, foret) au niveau des\n");
        printf("          sommets et les interactions entre ces ressources et populations (en termes d'echange de\n");
        printf("          biomasse ou d'influences) au niveau des arcs (aretes orientees). Sur cette base le programme\n");
        printf("          demande pourra permettre d'etudier des aspects structurels (connexite, forte connexite, k-connexite)\n");
        printf("          et des aspects fonctionnels (dynamique des populations, dynamique des ressources).\n");
        printf("\n          1. Retour au menu principal\n");
        printf("          2. Quitter\n");
        printf("Choix : ");
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
        printf("    ____                                           ______                     __     _                          \n");
        printf("   / __ \\ ___   _____ ___   ____ _ __  __ _  __   /_  __/_____ ____   ____   / /_   (_)____ _ __  __ ___   _____\n");
        printf("  / /_/ // _ \\ / ___// _ \\ / __ `// / / /| |/_/    / /  / ___// __ \\ / __ \\ / __ \\ / // __ `// / / // _ \\ / ___/\n");
        printf(" / _, _//  __/(__  )/  __// /_/ // /_/ /_>  <     / /  / /   / /_/ // /_/ // / / // // /_/ // /_/ //  __/(__  ) \n");
        printf("/_/ |_| \\___//____/ \\___/ \\__,_/ \\__,_//_/|_|    /_/  /_/    \\____// .___//_/ /_//_/ \\__, / \\__,_/ \\___//____/  \n");
        printf("                                                                  /_/                  /_/                      \n");
        printf("          En souvenir de Robin Fercoq\n");
        printf("          Bienvenue dans le repertoire des Reseaux Trophiques\n\n");
        printf("          1. Commencer\n");
        printf("          2. Aide \n");
        printf("          3. Quitter l'interface\n");

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

void niveauTrophique() {
    int retourC;
    do {
        printf("--- Niveaux trophiques ---\n\n");
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
        printf("--- ImportanceRelative ---\n\n");
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

void reseauTrophiqueManuel() {
    char cheminFichier[256]; // Pour stocker le chemin du fichier
    FILE *fichier; // Pointeur de fichier

    do {
        printf("--- RESEAUX MANUEL ---\n\n");
        printf("Entrez le chemin du fichier contenant le reseau trophique : ");
        scanf(" %255[^\n]", cheminFichier); // Saisie sécurisée du chemin
        fichier = fopen(cheminFichier, "r");

        if (fichier == NULL) {
            printf("Erreur : Impossible d'ouvrir le fichier. Veuillez reessayer.\n");
        } else {
            fclose(fichier); // On ferme le fichier après validation
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
            break;
        }
    } while (1); // Boucle jusqu'à une saisie correcte

    // Une fois le fichier validé, aller vers les options d'analyse
    int retour3;
    do {
        printf("--- OPTIONS D'ANALYSE POUR LE RESEAU MANUEL ---\n\n");
        printf("          1. Verification de la connexite du reseau\n");
        printf("          2. Recherche des sommets particuliers\n");
        printf("          3. Etude des niveaux trophiques\n");
        printf("          4. Importance relative des espèces\n");
        printf("          5. Dynamique des populations\n");
        printf("\n          6. Retour au menu principal\n");
        printf("          7. Quitter\n");
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
                niveauTrophique();
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
                return; // Retour au menu principal
            case 7:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour3 != 6);
}
