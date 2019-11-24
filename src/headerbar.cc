#include "headerbar.h"

#include <gtkmm-3.0/gtkmm.h>
#include <gtkmm-3.0/gtkmm/headerbar.h>

#include <iostream>
#include <thread>

MyHeaderBar::MyHeaderBar() {
  set_title("Multi Cache Cleaner");
  set_subtitle("Let me clean your caches");
  set_show_close_button(true);

  // css provider
  Glib::RefPtr<Gtk::CssProvider> css_provider = Gtk::CssProvider::create();
  css_provider->load_from_data(
      "button {background-image: image(blue);}\
     button:hover {background-image: image(blue);}\
     button:active {background-image: image(DarkBlue);}");

  // btn_clean_all->set_label("Clean all");
  btn_clean_all->set_valign(Gtk::Align::ALIGN_CENTER);
  btn_clean_all->get_style_context()->add_provider(
      css_provider, GTK_STYLE_PROVIDER_PRIORITY_USER);

  btn_clean_all->signal_clicked().connect(
      sigc::mem_fun(*this, &MyHeaderBar::on_clean_all_btn_clicked));

  pack_start(*btn_clean_all);

  // show_all();
}

/*
void threadedClean() {

  try {
    system("echo 3 > /proc/sys/vm/drop_caches");
  } catch (int e) {
    std::cout << "Error: " << e << std::endl;
  }

  try {
    // system("rm -rf /var/cache/xbps/*");
    system("rm  -rf /home/ryan/testdir/*");
  } catch (int e) {
    std::cout << "Error: " << e << std::endl;
  }
}
*/

void MyHeaderBar::on_clean_all_btn_clicked() {
  // TODO
  // clean xbps or apt package caches and clean all ram caches drop_caches don't
  // forget to create a thread for this function, it's cpu intensive , so the
  // program won't hang or crash

  try {
    system("echo 3 > /proc/sys/vm/drop_caches");
  } catch (int e) {
    std::cout << "Error: " << e << std::endl;
  }

  try {
    // system("rm -rf /var/cache/xbps/*");
    system("rm  -rf /home/ryan/testdir/*");
  } catch (int e) {
    std::cout << "Error: " << e << std::endl;
  }
}