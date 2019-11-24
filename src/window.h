#include <gtkmm-3.0/gtkmm.h>

#include <iostream>

class MainWindow : public Gtk::Window {
 public:
  MainWindow();

 protected:
  // Buttons
  Gtk::Button clean_xbps_btn, clean_dentries_btn, clean_page_cache_btn;

  // button click events
  void OnCleanXbpsBtnClicked();
  void OnCleanDentriesBtnClicked();
  void OnCleanPageCacheBtnClicked();

  // Box layout object
  Gtk::VBox box;
};