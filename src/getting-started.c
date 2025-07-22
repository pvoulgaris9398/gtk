#include <gtk/gtk.h>

static void
print_hello(GtkWidget *widget,
            gpointer data)
{
  g_print("%s\n", gtk_editable_get_text(GTK_EDITABLE(data)));
}

static void
activate(GtkApplication *app,
         gpointer data)
{
  GtkWidget *window;
  GtkWidget *button;
  GtkWidget *textbox;
  GtkWidget *box;

  window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "GTK Starter Sample");
  gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

  textbox = gtk_entry_new();

  button = gtk_button_new_with_label("Press Me");
  g_signal_connect(button, "clicked", G_CALLBACK(print_hello), textbox);

  box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
  gtk_window_set_child(GTK_WINDOW(window), GTK_WIDGET(box));

  gtk_box_append(GTK_BOX(box), textbox);
  gtk_box_append(GTK_BOX(box), button);

  gtk_window_present(GTK_WINDOW(window));
}

int main(int argc,
         char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);

  return status;
}