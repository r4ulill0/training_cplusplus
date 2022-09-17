#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void printVector(const vector<int>& vec) {
    for (int a : vec) {
        cout << a << " ,";
    }
    cout << "\n";
}

void printVector(const vector<string>& vec) {
    for (string a : vec) {
        cout << a << " ,";
    }
    cout << "\n";
}

int main() {
    cout << ("Aristotle"<"Plato");

    cout<< "Iniciando vector\n";
    vector<int> myVec{5,9,-1,200,0};

    printVector(myVec);
    cout << "\n --- Ordenando.... ---- \n";
    sort(myVec.begin(), myVec.end());
    printVector(myVec);

    cout << "\n##########\nIniciando vector de Strings\n";
    cout<< "Iniciando vector\n";
    vector<string> myStringVec{"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};
    printVector(myStringVec);
    sort(myStringVec.begin(), myStringVec.end());
    printVector(myStringVec);
}

