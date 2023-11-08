/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *label3;
  GtkWidget *label2;
  GtkWidget *label4;
  GtkWidget *entry1;
  GtkWidget *entry2;
  GtkWidget *label5;
  GtkWidget *entry3;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkObject *spinbutton3_adj;
  GtkWidget *spinbutton3;
  GtkWidget *label7;
  GtkWidget *vseparator2;
  GtkWidget *vseparator1;
  GtkWidget *eventbox1;
  GtkWidget *comboboxentry1;
  GtkWidget *checkbutton3;
  GtkWidget *checkbutton2;
  GtkWidget *label10;
  GtkWidget *label8;
  GtkWidget *label6;
  GtkWidget *label16;
  GtkWidget *eventbox2;
  GtkWidget *comboboxentry2;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label9;
  GtkWidget *radiobutton2;
  GSList *radiobutton2_group = NULL;
  GtkWidget *radiobutton1;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  label3 = gtk_label_new (_("nom donneur:"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 16, 160);
  gtk_widget_set_size_request (label3, 136, 24);

  label2 = gtk_label_new (_("Id fiche:"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 16, 112);
  gtk_widget_set_size_request (label2, 104, 25);

  label4 = gtk_label_new (_("Prenom donneur:"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 16, 200);
  gtk_widget_set_size_request (label4, 136, 25);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 144, 112);
  gtk_widget_set_size_request (entry1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed1), entry2, 144, 160);
  gtk_widget_set_size_request (entry2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  label5 = gtk_label_new (_("sexe:"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 376, 160);
  gtk_widget_set_size_request (label5, 41, 17);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed1), entry3, 144, 200);
  gtk_widget_set_size_request (entry3, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  spinbutton1_adj = gtk_adjustment_new (2, 1, 31, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbutton1, 136, 240);
  gtk_widget_set_size_request (spinbutton1, 60, 27);

  spinbutton2_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbutton2, 200, 240);
  gtk_widget_set_size_request (spinbutton2, 60, 27);

  spinbutton3_adj = gtk_adjustment_new (2000, 1900, 2023, 1, 10, 10);
  spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton3_adj), 1, 0);
  gtk_widget_show (spinbutton3);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbutton3, 256, 240);
  gtk_widget_set_size_request (spinbutton3, 60, 27);

  label7 = gtk_label_new (_("Groupe sanguin:"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed1), label7, 360, 200);
  gtk_widget_set_size_request (label7, 152, 25);

  vseparator2 = gtk_vseparator_new ();
  gtk_widget_show (vseparator2);
  gtk_fixed_put (GTK_FIXED (fixed1), vseparator2, 328, 88);
  gtk_widget_set_size_request (vseparator2, 24, 208);

  vseparator1 = gtk_vseparator_new ();
  gtk_widget_show (vseparator1);
  gtk_fixed_put (GTK_FIXED (fixed1), vseparator1, 304, 88);
  gtk_widget_set_size_request (vseparator1, 24, 208);

  eventbox1 = gtk_event_box_new ();
  gtk_widget_show (eventbox1);
  gtk_fixed_put (GTK_FIXED (fixed1), eventbox1, 504, 200);
  gtk_widget_set_size_request (eventbox1, 189, 29);

  comboboxentry1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry1);
  gtk_container_add (GTK_CONTAINER (eventbox1), comboboxentry1);
  gtk_widget_set_size_request (comboboxentry1, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("A"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("B"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("O"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("AB"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), "");

  checkbutton3 = gtk_check_button_new_with_mnemonic (_("Oui"));
  gtk_widget_show (checkbutton3);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton3, 504, 328);
  gtk_widget_set_size_request (checkbutton3, 118, 24);

  checkbutton2 = gtk_check_button_new_with_mnemonic (_("Non"));
  gtk_widget_show (checkbutton2);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton2, 608, 328);
  gtk_widget_set_size_request (checkbutton2, 118, 24);

  label10 = gtk_label_new_with_mnemonic (_("<b><span  color=\"red\">Ajout fiche:</span></b>"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed1), label10, 248, 16);
  gtk_widget_set_size_request (label10, 296, 56);
  gtk_label_set_use_markup (GTK_LABEL (label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label10), 0.5, 0.54);

  label8 = gtk_label_new (_("<b><span color=\"green\">souffrez vous d une maladie chronique ou allerogie:</span></b>"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed1), label8, 32, 320);
  gtk_widget_set_size_request (label8, 512, 33);
  gtk_label_set_use_markup (GTK_LABEL (label8), TRUE);

  label6 = gtk_label_new (_("Date naissance:\n"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 0, 248);
  gtk_widget_set_size_request (label6, 160, 25);

  label16 = gtk_label_new (_("Etablissement:"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed1), label16, 344, 112);
  gtk_widget_set_size_request (label16, 160, 25);

  eventbox2 = gtk_event_box_new ();
  gtk_widget_show (eventbox2);
  gtk_fixed_put (GTK_FIXED (fixed1), eventbox2, 488, 104);
  gtk_widget_set_size_request (eventbox2, 189, 29);

  comboboxentry2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry2);
  gtk_container_add (GTK_CONTAINER (eventbox2), comboboxentry2);
  gtk_widget_set_size_request (comboboxentry2, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("Marsa"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("ariana"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry2), _("gafsa"));

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 328, 384);
  gtk_widget_set_size_request (button1, 152, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label9 = gtk_label_new_with_mnemonic (_("Ajouter FIche"));
  gtk_widget_show (label9);
  gtk_box_pack_start (GTK_BOX (hbox1), label9, FALSE, FALSE, 0);

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("Femme"));
  gtk_widget_show (radiobutton2);
  gtk_fixed_put (GTK_FIXED (fixed1), radiobutton2, 568, 160);
  gtk_widget_set_size_request (radiobutton2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("Homme"));
  gtk_widget_show (radiobutton1);
  gtk_fixed_put (GTK_FIXED (fixed1), radiobutton1, 432, 160);
  gtk_widget_set_size_request (radiobutton1, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobutton2, "toggled",
                    G_CALLBACK (on_radiobutton2_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton1, "toggled",
                    G_CALLBACK (on_radiobutton1_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (window1, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (window1, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (window1, spinbutton3, "spinbutton3");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, vseparator2, "vseparator2");
  GLADE_HOOKUP_OBJECT (window1, vseparator1, "vseparator1");
  GLADE_HOOKUP_OBJECT (window1, eventbox1, "eventbox1");
  GLADE_HOOKUP_OBJECT (window1, comboboxentry1, "comboboxentry1");
  GLADE_HOOKUP_OBJECT (window1, checkbutton3, "checkbutton3");
  GLADE_HOOKUP_OBJECT (window1, checkbutton2, "checkbutton2");
  GLADE_HOOKUP_OBJECT (window1, label10, "label10");
  GLADE_HOOKUP_OBJECT (window1, label8, "label8");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, label16, "label16");
  GLADE_HOOKUP_OBJECT (window1, eventbox2, "eventbox2");
  GLADE_HOOKUP_OBJECT (window1, comboboxentry2, "comboboxentry2");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label9, "label9");
  GLADE_HOOKUP_OBJECT (window1, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (window1, radiobutton1, "radiobutton1");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkWidget *label11;
  GtkWidget *entry4;
  GtkWidget *label15;
  GtkWidget *button4;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label14;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label12;
  GtkWidget *button3;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label13;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window2), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 104, 104);
  gtk_widget_set_size_request (treeview1, 512, 264);

  label11 = gtk_label_new (_("<b><span color=\"red\">Affichage:</span></b>"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed2), label11, 200, 16);
  gtk_widget_set_size_request (label11, 272, 25);
  gtk_label_set_use_markup (GTK_LABEL (label11), TRUE);

  entry4 = gtk_entry_new ();
  gtk_widget_show (entry4);
  gtk_fixed_put (GTK_FIXED (fixed2), entry4, 104, 64);
  gtk_widget_set_size_request (entry4, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry4), 8226);

  label15 = gtk_label_new (_("Id fiche:"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed2), label15, 24, 72);
  gtk_widget_set_size_request (label15, 65, 17);

  button4 = gtk_button_new ();
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed2), button4, 280, 64);
  gtk_widget_set_size_request (button4, 112, 29);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button4), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox4), label14, FALSE, FALSE, 0);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed2), button2, 216, 384);
  gtk_widget_set_size_request (button2, 144, 40);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox2), label12, FALSE, FALSE, 0);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed2), button3, 392, 384);
  gtk_widget_set_size_request (button3, 128, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button3), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox3), label13, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window2, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window2, label11, "label11");
  GLADE_HOOKUP_OBJECT (window2, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (window2, label15, "label15");
  GLADE_HOOKUP_OBJECT (window2, button4, "button4");
  GLADE_HOOKUP_OBJECT (window2, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window2, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window2, image4, "image4");
  GLADE_HOOKUP_OBJECT (window2, label14, "label14");
  GLADE_HOOKUP_OBJECT (window2, button2, "button2");
  GLADE_HOOKUP_OBJECT (window2, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window2, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window2, image2, "image2");
  GLADE_HOOKUP_OBJECT (window2, label12, "label12");
  GLADE_HOOKUP_OBJECT (window2, button3, "button3");
  GLADE_HOOKUP_OBJECT (window2, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window2, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window2, image3, "image3");
  GLADE_HOOKUP_OBJECT (window2, label13, "label13");

  return window2;
}

