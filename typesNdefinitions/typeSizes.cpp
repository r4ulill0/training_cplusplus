#include <iostream>
using namespace std;

int main() {

    //bool
    cout << "bool " << sizeof(bool) << " bytes\n";   
    //chars
    cout << "char " << sizeof(char) << " bytes\n";   
    //integer
    cout << "int " << sizeof(int) << " bytes\n";   
    //floats
    cout << "float " << sizeof(float) << " bytes\n";   
    cout << "double " << sizeof(double) << " bytes\n";   
    //pointers
    cout << "bool* " << sizeof(bool*) << " bytes\n";   
    cout << "char* " << sizeof(char*) << " bytes\n";   
    cout << "int* " << sizeof(int*) << " bytes\n";   
    cout << "float* " << sizeof(float*) << " bytes\n";   
    cout << "double* " << sizeof(double*) << " bytes\n";   
    //arrays (char[])
    cout << "char[5] " << sizeof(char[5]) << " bytes\n";   
    //references
    cout << "bool& " << sizeof(bool&) << " bytes\n";   
    cout << "char& " << sizeof(char&) << " bytes\n";   
    cout << "int& " << sizeof(int&) << " bytes\n";   
    cout << "float& " << sizeof(float&) << " bytes\n";   
    cout << "double& " << sizeof(double&) << " bytes\n";   
    //data struct
    struct someStruct {int a; int b; double c;};
    cout << "someStruct {int a; int b; double c;} " << sizeof(someStruct) << " bytes\n";   
    //data class
    class someClass {int a; int b; double c; void f(){};};
    cout << "someClass {int a; int b; double c; void f(){};} " << sizeof(someClass) << " bytes\n";   
    //enumerations
    enum class Color {red, blue, green};
    cout << "enum class Color {red, blue, green} " << sizeof(Color) << " bytes\n";   
    enum Traffic_light {green, yellow, red};
    cout << "enum Traffic_light {green, yellow, red} " << sizeof(Traffic_light) << " bytes\n";   
}
