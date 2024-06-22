#include <iostream>
#include <cstring>
#include "browsers.h"

int main() {
  system("rmdir C:\\test");
  system("mkdir C:\\test");
  installBrowser("brave");
  return 0;
}
