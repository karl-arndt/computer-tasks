#ifndef IMAGES_H
#define IMAGES_H

std::vector<std::string> getImages() {
  std::vector<std::string> images {
    {"https://i.imgur.com/Nb8nwk0.jpg"}
  };
  return images;
}

void downloadImages() {
  std::vector<std::string> images = getImages();
  for (int i = 0; i < images.size(); i++) {
    std::string command = "curl " + images[i] + " -o salting-image" + std::to_string(i) + ".jpg";
    system(command.c_str());
  }
}

#endif