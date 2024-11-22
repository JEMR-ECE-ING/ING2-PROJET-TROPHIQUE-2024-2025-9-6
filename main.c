#include <stdio.h>
#include <stdlib.h>

void ReseauxTrophique1() {
    int retour1;
    do {
        printf("--- RESEAUX 2---\n\n");
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

void ReseauxTrophique2() {
    int retour2;
    do {
        printf("--- RESEAUX 2 ---\n\n");
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

void ReseauxTrophique3() {
    int retour3;
    do {
        printf("--- RESEAUX 3 ---\n\n");
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
void Application() {
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
        printf("          3. 1 2 3 Viva La Tunisie\n\n");
        printf("          4. Retour au menu principal\n");
        printf("          5. Quitter\n");
        printf("\nVotre choix : ");
        scanf("%d", &retour);

        switch (retour) {
            case 1:
                system("cls"); // Efface l'écran (Windows). Utilisez `system("clear")` sous Linux/Mac.
                ReseauxTrophique1();
                break;
            case 2:
                system("cls");
                ReseauxTrophique2();
                break;
            case 3:
                system("cls");
                ReseauxTrophique3();
                break;
            case 4:
                system("cls"); // Efface l'écran pour retourner au menu principal
                return; // Retourne au menu principal
            case 5:
                exit(0); // Quitter l'application
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (retour != 4); // Continue tant que l'utilisateur ne demande pas de retourner au menu principal
}

// Fonction pour le cas où l'utilisateur choisit "Aide"
void Aide() {
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
                Application();
                break;
            case 2:
                system("cls");
                Aide();
                break;
            case 3:
                printf("Au revoir !\n");
                exit(0);
            default:
                printf("Option invalide. Veuillez choisir de nouveau.\n");
        }
    } while (1); // Boucle infinie pour réafficher le menu principal après chaque retour
}

int main() {
    displayMenu();
    return 0;
}
