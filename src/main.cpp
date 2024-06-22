#include <iostream>
#include <cstring>
#include "browsers.h"

int main() {
  // system("rmdir C:\\test");
  // system("mkdir C:\\test");
  installBrowser("brave");
  installBrowser("chrome");
  installBrowser("firefox");
  // installBrowser("chromium-browser");
  installBrowser("msedge");
  return 0;
}
