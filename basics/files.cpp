#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    cout << "Escribiendo 100 numeros en deleteme.txt\n";
    ofstream fileStream {"deleteme.txt"};
    for (int i=0;i<100;i++) {
        fileStream << i << "\n";
    }
    fileStream.close();
    ifstream reader {"deleteme.txt"};
   // for (string line; getline(reader, line);) {
   //     cout << line;
   // }
    for (int i=0; i<100; i++) {
        string line;
        reader >> line;
        cout << "Leido: " << line << " esperado: " <<i << " ¿iguales? " << (line == to_string(i) ? "Yes": "No") << "\n";
    }
}
