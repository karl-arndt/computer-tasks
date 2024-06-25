#include <iostream>
#include <cstring>
#include "browsers.h"
#include "images.h"

int main() {
  std::vector<std::vector<std::string>> browsers = getBrowsers();
  for (int i = 0; i < size(browsers); i++) {
    installBrowser(browsers[i][0]);
  }
  return 0;
}
