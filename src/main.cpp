#include <iostream>

void brave() {
  system("winget install --id Brave.Brave --location C:\\test --silent");
}

int main() {
  system("rmdir C:\\test");
  system("mkdir C:\\test");
  brave();
  return 0;
}
