#include <iostream>
#include <cstring>
#include "browsers.h"
#include "images.h"

int main() {
  // system("rmdir C:\\test");
  // system("mkdir C:\\test");
  installBrowser("brave");
  installBrowser("chrome");
  installBrowser("firefox");
  // installBrowser("chromium-browser");
  installBrowser("msedge");
  installBrowser("opera");
  return 0;
}
