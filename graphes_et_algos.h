//
// Created by User on 11/13/2024.
//

#ifndef ING2_PROJET_TROPHIQUE_2024_2025_9_6_GRAPHES_ET_ALGOS_H
#define ING2_PROJET_TROPHIQUE_2024_2025_9_6_GRAPHES_ET_ALGOS_H
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int id;
    int depart, arrive;
    int poids;
} arc;

typedef struct{
    int ordre;
    int taille;
    arc* tabArc;
}graphe;

graphe* chargerGrapheArcs(FILE* fichier);
int** chargerMatriceAdjacence(FILE* fichier);

#endif //ING2_PROJET_TROPHIQUE_2024_2025_9_6_GRAPHES_ET_ALGOS_H
