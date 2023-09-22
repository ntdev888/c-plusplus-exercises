#include <iostream>

int main() {
    int primeNum;
    std::string userInput;

    std::cout << "Prime Check\n";
    std::cout << "************\n";
    std::cout << "Enter a number: ";
    std::cin >> primeNum;

    userInput = std::to_string(primeNum);

    if(userInput.length() == NULL) {
        std::cout << "\nPlease enter a valid number";
    } else if (primeNum == 1) {
        std::cout << "Prime Number\n";
        return 0;
    }

    for(int i = 2; i < primeNum - 1 ; i++) {
        std::cout << i << " ";

        if(primeNum % i == 0) {
            std::cout << "\nNot a Prime Number\n";
            return 0;
        }
    }
    std::cout << "\n";
    std::cout << "Prime Number!";
    return 0;
}