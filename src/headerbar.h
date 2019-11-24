#include <gtkmm-3.0/gtkmm.h>
#include <gtkmm-3.0/gtkmm/headerbar.h>

#include <iostream>

class MyHeaderBar : public Gtk::HeaderBar {
 public:
  MyHeaderBar();
  // virtual ~MyHeaderBar();

  // headerbar buttons
  Gtk::Button* btn_clean_all = new Gtk::Button("Clean All");

  // signal handlers
  void on_clean_all_btn_clicked();
};