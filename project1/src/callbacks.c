#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"fiche.h"


int tab[1]={1};
void
on_button1_clicked                     (GtkWidget      *objet,
                                        gpointer         user_data)
{
        GtkWidget *spinbutton1;
	GtkWidget *spinbutton2;
	GtkWidget *spinbutton3;
	GtkWidget *entry1;
	GtkWidget *entry2;
	GtkWidget *entry3;
	GtkWidget *comboboxentry1;
	GtkWidget *comboboxentry2;
	GtkWidget *radiobutton1;
	GtkWidget *radiobutton2;
	GtkWidget *checkbutton2;
	GtkWidget *checkbutton3;
	GtkWidget *window1;
	int k ,jours,mois,annees;
	fiche ff;

 window1=lookup_widget(objet,"window1");
comboboxentry2=lookup_widget(objet,"comboboxentry2");
if ( strcmp("Marsa",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2)))==0)
	k=1;
else if ( strcmp("ariana" ,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2)))==0)
	k=2;
else k=3;
if (k==1)
	strcpy(ff.etablissement,"Marsa");
else if (k==2)
	strcpy(ff.etablissement,"ariana");
else	
	strcpy(ff.etablissement,"gafsa");




comboboxentry1=lookup_widget(objet,"comboboxentry1");
if ( strcmp("A",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry1)))==0)
	k=1;
else if ( strcmp("B" ,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry1)))==0)
	k=2;
else if ( strcmp("O" ,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry1)))==0)
	k=3;
else k=4;
if (k==1)
	strcpy(ff.groupesanguin,"A");
else if (k==2)
	strcpy(ff.groupesanguin,"B");
else if (k==3)
	strcpy(ff.groupesanguin,"O");
else	
	strcpy(ff.groupesanguin,"AB");

entry1=lookup_widget(objet,"entry1");
strcpy(ff.id,gtk_entry_get_text(GTK_ENTRY(entry1)));
entry2=lookup_widget(objet,"entry2");
strcpy(ff.nom,gtk_entry_get_text(GTK_ENTRY(entry2)));
entry3=lookup_widget(objet,"entry3");
strcpy(ff.prenom,gtk_entry_get_text(GTK_ENTRY(entry3)));
spinbutton1=lookup_widget(objet,"spinbutton1");
spinbutton2=lookup_widget(objet,"spinbutton2");
spinbutton3=lookup_widget(objet,"spinbutton3");
jours=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton1));
mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton2));
annees=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton3));
sprintf(ff.jours,"%d",jours);
sprintf(ff.mois,"%d",mois);
sprintf(ff.annees,"%d",annees);

if (tab[1]==1)
	strcpy(ff.etat,"sain");
else if (tab[0]==1)
	strcpy(ff.etat,"malade");

ajouter_fiche(ff);



}


void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button4_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button3_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}

