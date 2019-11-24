#include <gtkmm-3.0/gtkmm.h>

#include <iostream>

#include "headerbar.h"
#include "window.h"

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create(argc, argv, "com.example");

  MyHeaderBar headerbar;
  MainWindow window;
  window.set_titlebar(headerbar);

  window.show_all();

  return app->run(window);
}