#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.view_profile();
  std::cout << "\n";
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");
  sam.add_hobby("Fishing");
  std::cout << "\n";
  sam.view_profile();

}