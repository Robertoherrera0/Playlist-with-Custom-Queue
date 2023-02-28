// Copyright, Roberto Herrera
#include <iostream>

#include "queue.h"

int main() {
  Queue<std::string> playlist;
  std::string input;

  do {
    std::cin >> input;
    // O(1)
    // adds sing to queue
    if (input == "add") {
      std::string song;
      std::cin >> song;
      playlist.push(song);
    }
    // O(1)
    // play first song on queue
    else if (input == "play1") {
      std::cout << playlist.front() << std::endl;
      playlist.pop();
    }
    // O(playlist)
    // play all of the remaining songs on the queue  
    else if (input == "play") {
      while (!playlist.empty()) {
        std::cout << playlist.front() << std::endl;
        playlist.pop();
      }
    }

  } while (input != "exit");
}