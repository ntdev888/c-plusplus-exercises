#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.view_profile();
  std::cout << "\n";
  sam.add_hobby("Fishing");
  std::cout << "\n";
  sam.view_profile();

}