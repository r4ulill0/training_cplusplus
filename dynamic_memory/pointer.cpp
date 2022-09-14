#include <iostream>
// Ejemplo práctico para visualizar la diferencia entre referencia y puntero
// La referencia es una dirección del stack
// El puntero es una dirección del heap
// El valor *x es lo que se encuentra en el heap al seguir el puntero x
// La dirección &x es la dirección del stack donde se almacena la variable x
// x es el valor de la variable en la dirección del stack &x
//
// Un puntero guardado en una variable H se podría representar de la siguiente
// forma:
//
// &H       H       *H          Stack                    Heap
// --------------------        ----------                ------
// 0x20     0xA0B0   3     0x10|.........|        0xA0AF|......|
//     |------------------>0x20| 0xA0B0  |------->0xA0B0|  3   |
//                             |.........|              |......|
int main(void) {

    int b = 1;
    int c = 2;
    int* a = &b;
    int* d = &c;
    int** x = new int*[2];
    x[0] = a;
    x[1] = d;

    std::cout << "&b: " << &b << " b: " << b << "\n";
    std::cout << "&c: " << &c << " c: " << c << "\n";
    std::cout << "&a: " << &a << " a: " << a << " *a: " << *a << "\n";
    std::cout << "&d: " << &d << " d: " << d << " *d: " << *d << "\n";
    std::cout << "&x: " << &x << " x: " << x << " *x: " << *x << " **x: " << **x << "\n";
}
