#include <iostream>

int main() {
  int dog_age;
  int early_years = 21;
  int later_years;
  int human_years;
  //this program is for dogs older than 2 years old
  
  std::cout << "How old is your dog?\n";
  std::cin >> dog_age;

  later_years = (dog_age - 2) * 4;
  human_years = early_years + later_years;

  std::cout << "Your dog is " << human_years << " old in human years\n";

  return 0;
  

}