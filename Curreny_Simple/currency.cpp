#include <iostream>

int main() {
  double pesos; double reais; double soles;
  double dollars;
  double pesos_usd_rate; double reais_usd_rate; double soles_usd_rate;

  pesos_usd_rate = 0.65;
  reais_usd_rate = 0.4;
  soles_usd_rate = 0.22;
  
  std::cout << "Enter number of Colombian Persons: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  dollars = (pesos_usd_rate * pesos) + (reais_usd_rate * reais) + (soles_usd_rate * soles);

  std::cout << "US Dollars Total amount = $" << dollars << "\n";

  return 0;
}