#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fiche.h"
#include<gtk/gtk.h>

enum {
    EID,
    ENOM,
    EPRENOM,
    ESEXE,
    EJOUR,
    EMOIS,
    EANNEE,
    EGROUPESANGUIN,
    EETAT,
    COLUMNS,
};

///////////////////////////////////////////////
void ajouter_fiche(fiche f) {
    FILE *fp;
    fp = fopen("fiche.txt", "a+");
    if (fp != NULL) {
        fprintf(fp, "%d %s %s %s %d %d %d %s %s\n", f.id, f.nom, f.prenom, f.sexe, f.jour, f.mois, f.annee, f.groupesanguin, f.etat);
        fclose(fp);
    }
}

///////////////////////////////////////////////
void affiche_fiche(GtkWidget *liste) {
    GtkCellRenderer *renderer;
    GtkTreeViewColumn *column;
    GtkTreeIter iter;
    GtkListStore *store;
    int id;
    char nom[20], prenom[20], sexe[20], groupesanguin[20], etat[20];
    int jour, mois, annee;
    store = NULL;
    FILE *fp;
    store = gtk_tree_view_get_model(liste);

    if (store == NULL) {
        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("ID", renderer, "text", EID, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Nom", renderer, "text", ENOM, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Prénom", renderer, "text", EPRENOM, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Sexe", renderer, "text", ESEXE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Jour", renderer, "text", EJOUR, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Mois", renderer, "text", EMOIS, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Année", renderer, "text", EANNEE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Groupe Sanguin", renderer, "text", EGROUPESANGUIN, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("État", renderer, "text", EETAT, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
    }

    store = gtk_list_store_new(COLUMNS, G_TYPE_INT, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_INT, G_TYPE_INT, G_TYPE_INT, G_TYPE_STRING, G_TYPE_STRING);
    fp = fopen("fiche.txt", "r");
    if (fp == NULL) {
        return;
    } else {
        while (fscanf(fp, "%d %s %s %s %d %d %d %s %s\n", &id, nom, prenom, sexe, &jour, &mois, &annee, groupesanguin, etat) != EOF) {
            gtk_list_store_append(store, &iter);
            gtk_list_store_set(store, &iter, EID, id, ENOM, nom, EPRENOM, prenom, ESEXE, sexe, EJOUR, jour, EMOIS, mois, EANNEE, annee, EGROUPESANGUIN, groupesanguin, EETAT, etat, -1);
        }
        fclose(fp);
        gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
        g_object_unref(store);
    }
}

///////////////////////////////////////////////

void supprimer_fiche(int id) {
    fiche f;
    FILE *fp, *temp;
    fp = fopen("fiche.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        return;
    } else {
        while (fscanf(fp, "%d %s %s %s %d %d %d %s %s\n", &f.id, f.nom, f.prenom, f.sexe, &f.jour, &f.mois, &f.annee, f.groupesanguin, f.etat) != EOF) {
            if (f.id != id) {
                fprintf(temp, "%d %s %s %s %d %d %d %s %s\n", f.id, f.nom, f.prenom, f.sexe, f.jour, f.mois, f.annee, f.groupesanguin, f.etat);
            }
        }
        fclose(fp);
        fclose(temp);
        remove("fiche.txt");
        rename("temp.txt", "fiche.txt");
    }
}

///////////////////////////////////////////////
void modifier_fiche(char achanger[50], char critere[50], int identifiant) {
    GtkWidget *liste;
    GtkTreeModel *model;
    GtkTreeIter iter;
    char nom[20], prenom[20], sexe[20], groupesanguin[20], etat[20];
    int jour, mois, annee;

    liste = NULL;
    FILE *fp, *temporaire;
    temporaire = fopen("Temporaire.txt", "a");
    fp = fopen("fiche.txt", "r+");

    while (fscanf(fp, "%d %s %s %s %d %d %d %s %s\n", &identifiant, nom, prenom, sexe, &jour, &mois, &annee, groupesanguin, etat) != EOF) {
        if (identifiant == identifiant) {
            if (strcmp(critere, "nom") == 0) {
                strcpy(nom, achanger);
            }
            if (strcmp(critere, "prenom") == 0) {
                strcpy(prenom, achanger);
            }
            if (strcmp(critere, "sexe") == 0) {
                strcpy(sexe, achanger);
            }
            if (strcmp(critere, "jour") == 0) {
                jour = atoi(achanger);
            }
            if (strcmp(critere, "mois") == 0) {
                mois = atoi(achanger);
            }
            if (strcmp(critere, "annee") == 0) {
                annee = atoi(achanger);
            }
            if (strcmp(critere, "groupesanguin") == 0) {
                strcpy(groupesanguin, achanger);
            }
            if (strcmp(critere, "etat") == 0) {
                strcpy(etat, achanger);
            }
        }
        fprintf(temporaire, "%d %s %s %s %d %d %d %s %s\n", identifiant, nom, prenom, sexe, jour, mois, annee, groupesanguin, etat);
    }
    fclose(temporaire);
    fclose(fp);
    remove("fiche.txt");
    rename("Temporaire.txt", "fiche.txt");
}


///////////////////////////////////////////////
void recherche_fiche(GtkWidget *liste, int id) {
    GtkCellRenderer *renderer;
    GtkTreeViewColumn *column;
    GtkTreeIter iter;
    GtkListStore *store;
    int identifiant;
    char nom[20], prenom[20], sexe[20], groupesanguin[20], etat[20];
    int jour, mois, annee;

    store = NULL;
    FILE *f;
    store = gtk_tree_view_get_model(liste);

    if (store == NULL) {
        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("identifiant", renderer, "text", EIDENTIFIANT, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("nom", renderer, "text", ENOM, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("prenom", renderer, "text", EPRENOM, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("sexe", renderer, "text", ESEXE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("jour", renderer, "text", EJOUR, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("mois", renderer, "text", EMOIS, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("annee", renderer, "text", EANNEE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("groupesanguin", renderer, "text", EGROUPESANGUIN, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("etat", renderer, "text", EETAT, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
    }

    store = gtk_list_store_new(COLUMNS, G_TYPE_INT, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_INT, G_TYPE_INT, G_TYPE_INT, G_TYPE_STRING, G_TYPE_STRING);
    f = fopen("fiche.txt", "r");

    if (f == NULL) {
        return;
    } else {
        while (fscanf(f, "%d %s %s %s %d %d %d %s %s\n", &identifiant, nom, prenom, sexe, &jour, &mois, &annee, groupesanguin, etat) != EOF) {
            if (id == identifiant) {
                gtk_list_store_append(store, &iter);
                gtk_list_store_set(store, &iter, EIDENTIFIANT, identifiant, ENOM, nom, EPRENOM, prenom, ESEXE, sexe, EJOUR, jour, EMOIS, mois, EANNEE, annee, EGROUPESANGUIN, groupesanguin, EETAT, etat, -1);
            }
        }
        fclose(f);
        gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
        g_object_unref(store);
    }
}


