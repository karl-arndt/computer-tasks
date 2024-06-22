#include <iostream>
#include <cstring>
#include <string>

void openWebsites(std::string browser) {
  std::string websites[] =  { "google.com", "blogger.com", "youtube.com", "linkedin.com",
  "wordpress.org", "apple.com", "wikipedia.org", "whatsapp.com", "telegram.org", "mozilla.org",
  "facebook.com", "adobe.com", "github.com", "amazon.com", "imdb.com", "paypal.com" 
  };
  
  for (int i = 0; i < size(websites); i++) {
    std::string command = "start " + browser + " " + websites[i];
    const char* commandArray = command.c_str();
    system(commandArray);
  }
}

void installBrave() {
  system("winget install --id Brave.Brave --location \"C:\\test\" --silent");
  openWebsites("brave");
}

int main() {
  system("rmdir C:\\test");
  system("mkdir C:\\test");
  installBrave();
  return 0;
}
