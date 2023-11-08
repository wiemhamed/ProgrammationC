#include <stdio.h>

typedef struct {
    int id;
    char nom[20];
    char prenom[20];
    char sexe[20];
    int jour;
    int mois;
    int annee;
    char groupesanguin[20];
    char etat[20];
} fiche;

void ajouter_fiche(fiche f);
void afficher_fiche(GtkWidget *liste);
void supprimer_fiche(int id);
void modifier_fiche(char achanger[50], char critere[50], int identifiant);
void recherche_fiche(GtkWidget *liste, int id);
