#ifndef BROWSERS_H
#define BROWSERS_H 

#include <iostream>
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

std::string getBrowserID(std::string browser) {
  std::string browsers[][2] = {
    {"brave", "Brave.Brave"},
    {"google", "Google.Chrome.EXE"},
    {"firefox", "Mozilla.Firefox"},
    {"chromium", "Hibbiki.Chromium"}
  };
  std::string output = "";
  for(int i = 0; i < size(browsers); i++) {
    if (browsers[i][0] == browser) {
      output = browsers[i][1];
    }
  }
  return output;
}


void installBrowser(std::string browser) {
  std::string command = "winget install --id " + getBrowserID(browser) + " --silent";
  system(command.c_str());
  openWebsites(browser);
}

#endif

