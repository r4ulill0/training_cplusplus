#include <iostream>
using namespace std;


// Esta definicion permite pasar rvalues
void bucle(const char& init, const char& limit) {

    for (char c=init; c<=limit; c++) {
        cout << c << " " << int(c) << " \n";
    }
}

int main() {

    cout << "\n######\nVERSION CHAR\n######\n\n";
    bucle('a', 'z');
    bucle('0','9');
    
    cout << "\n######\nVERSION HEX\n######\n\n";
    bucle('\x61', '\x7A');
    bucle('\x30', '\x39');


}
