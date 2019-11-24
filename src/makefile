
CFLAGS=${pkg-config gtkmm-3.0 --cflags --libs}



MultiCacheCleaner: MultiCacheCleanerMain.o headerbar.o window.o
	g++ headerbar.o window.o MultiCacheCleanerMain.o ${shell pkg-config gtkmm-3.0 --cflags --libs} -o MultiCacheCleaner

MultiCacheCleanerMain.o: MultiCacheCleanerMain.cc
	g++ -c MultiCacheCleanerMain.cc ${shell pkg-config gtkmm-3.0 --cflags --libs}

headerbar.o: headerbar.cc headerbar.h
	g++ -c headerbar.cc ${shell pkg-config gtkmm-3.0 --cflags --libs}

window.o: window.cc window.h
	g++ -c window.cc ${shell pkg-config gtkmm-3.0 --cflags --libs}



install: MultiCacheCleaner
	cp MultiCacheCleaner /usr/local/bin


clean:
	rm -f *.o MultiCacheCleaner
