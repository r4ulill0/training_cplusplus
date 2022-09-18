#include <iostream>
int main(){

    char c = 128;
    int a = c;
    std::cout << "El char 128 (" << c << ") se ha convertido en un int con valor: " << a << "\n";
    if (a<0) {
        std::cout << "Los char en esta implementación son signed."
    } else {
        std::cout << "Los char en esta implementación son unsigned."
    }
}
