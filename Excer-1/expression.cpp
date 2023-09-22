#include <iostream>

int main() {
    double a; double b; double c; double d; double x; double y; double z;

    std::cout << "Enter a Value: ";
    std::cin >> a;
    std::cout << "Enter b Value: ";
    std::cin >> b;
    std::cout << "Enter c Value: ";
    std::cin >> c;
    std::cout << "Enter d Value: ";
    std::cin >> d;
    std::cout << "Enter x Value: ";
    std::cin >> x;
    std::cout << "Enter y Value: ";
    std::cin >> y;

    z = ((a*x)+(b-c)*(c-d))/2;

    std::cout << "Z is equal to: " << z << "\n";

    return 0;

}