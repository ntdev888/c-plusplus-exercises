#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;
  double root1;
  double root2;

  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;

  //std::cout << "b^2 is " << b * b << "\n" ;

  root1 = (b * b) - (4 * a * c);

  if (root1 < 0) {
    root1 = root1 * -1;
    root1 = std::sqrt(root1);
    root1 = root1 * -1;
    root2 = root1;
  } else {
    root1 = std::sqrt(root1);
    root2 = root1;
  };

  root1 = (-b + root1) / (2 * a);
  root2 = (-b - root2) / (2 * a);
  std::cout <<"root1 is " << root1 << "\n";
  std::cout <<"root2 is " << root2 << "\n";

  return 0;
  
}