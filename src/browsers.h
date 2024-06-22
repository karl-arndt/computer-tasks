#ifndef BROWSERS_H
#define BROWSERS_H 

#include <iostream>
#include <string>
#include <map>

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


void installBrowser(std::string browser) {
  system("winget install --id Brave.Brave --silent");
  openWebsites(browser);
}

#endif

