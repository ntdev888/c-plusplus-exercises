#include <iostream>
#include <algorithm>

int main() {
    int a; int b; int c; int num_out[3]; 
    char numOut;
    int arraySize = sizeof(num_out) / sizeof(num_out[0]);

    std::cout << "Enter A value: ";
    std::cin >> a;
    num_out[0] = a;
    std::cout << "Enter B value: ";
    std::cin >> b;
    num_out[1] = b;
    std::cout << "Enter C value: ";
    std::cin >> c;
    num_out[2] = c;

    for (int i = 0; i < arraySize; i++ ) {
        std::cout << num_out[i] << ", ";
    };

    std::cout << "\n";

    std::sort(num_out, num_out + arraySize);
    if (num_out[0] == a) {
        numOut = 'A';
    } else if(num_out[0] == b) {
        numOut = 'B';
    } else {
        numOut = 'C';
    };

    std::cout << "Smallest number is " << num_out[0] << " this is holder " << numOut << "\n";

    return 0;


}