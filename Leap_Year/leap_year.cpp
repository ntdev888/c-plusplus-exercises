#include <iostream>

int main() {
  
  int year; int leng;
  
  std::cout << "----LEAP YEAR CALC----\n";
  std::cout << "Please input year: ";
  std::cin >> year;

  leng = std::to_string(year).length();

  if (leng < 4) {
    std::cout << "Year length is too short\n";
    return 0;
  }

  if (year % 4 == 0 && year % 100 != 0) {
    std::cout << "Leap Year\n";
  } else if (year % 400 == 0) {
    std::cout << "Leap Year\n";
  } else {
    std::cout << "not a Leap Year\n";
  }

  return 0;
  
}