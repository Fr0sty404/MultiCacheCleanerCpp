#include "window.h"

#include "headerbar.h"

MainWindow::MainWindow() {
  // init headberbar class obj
  // MyHeaderBar headerbar;

  // set window properties
  set_default_size(460, 160);

  // set button label text
  clean_xbps_btn.set_label("Clean XBPS Cache");
  clean_page_cache_btn.set_label("Clean Page Cache");
  clean_dentries_btn.set_label("Clean dentries Cache");

  box.set_spacing(20);
  // start box pack of buttons
  box.pack_start(clean_xbps_btn);
  box.pack_start(clean_dentries_btn);
  box.pack_end(clean_page_cache_btn);

  // add box to MainWindow
  add(box);

  // Button clicked events
  clean_xbps_btn.signal_clicked().connect(
      sigc::mem_fun(*this, &MainWindow::OnCleanXbpsBtnClicked));
  clean_page_cache_btn.signal_clicked().connect(
      sigc::mem_fun(*this, &MainWindow::OnCleanPageCacheBtnClicked));
  clean_dentries_btn.signal_clicked().connect(
      sigc::mem_fun(*this, &MainWindow::OnCleanDentriesBtnClicked));

  // adjust position of buttons
  clean_xbps_btn.set_valign(Gtk::Align::ALIGN_CENTER);
  clean_xbps_btn.set_halign(Gtk::Align::ALIGN_CENTER);

  clean_page_cache_btn.set_valign(Gtk::Align::ALIGN_CENTER);
  clean_page_cache_btn.set_halign(Gtk::Align::ALIGN_CENTER);

  clean_dentries_btn.set_valign(Gtk::Align::ALIGN_CENTER);
  clean_dentries_btn.set_halign(Gtk::Align::ALIGN_CENTER);

  // show everything
}

void MainWindow::OnCleanXbpsBtnClicked() {}

void MainWindow::OnCleanDentriesBtnClicked() {}

void MainWindow::OnCleanPageCacheBtnClicked() {}