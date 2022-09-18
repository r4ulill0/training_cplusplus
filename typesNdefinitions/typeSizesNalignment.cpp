#include <iostream>
using namespace std;

int main() {

    //bool
    cout << "bool " << sizeof(bool) << " bytes " << alignof(true) << " bytes alineados\n";   
    //chars
    cout << "char " << sizeof(char) << " bytes " << alignof('a') << " bytes alineados\n";   
    //integer
    cout << "short " << sizeof(short) << " bytes " << alignof((short)234) << " bytes alineados\n";   
    cout << "int " << sizeof(int) << " bytes " << alignof(234) << " bytes alineados\n";   
    cout << "long " << sizeof(long) << " bytes " << alignof(234L) << " bytes alineados\n";   
    cout << "long long " << sizeof(long long) << " bytes " << alignof(234LL) << " bytes alineados\n";   
    //floats
    cout << "float " << sizeof(float) << " bytes " << alignof(2.34F) << " bytes alineados\n";   
    cout << "double " << sizeof(double) << " bytes " << alignof(2.3) << " bytes alineados\n";   
    cout << "long double " << sizeof(long double) << " bytes " << alignof(2.3L) << " bytes alineados\n";   
    //pointers
    cout << "bool* " << sizeof(bool*) << " bytes \n";   
    cout << "char* " << sizeof(char*) << " bytes \n";   
    cout << "int* " << sizeof(int*) << " bytes \n";   
    cout << "float* " << sizeof(float*) << " bytes \n";   
    cout << "double* " << sizeof(double*) << " bytes \n";   
    //arrays (char[])
    cout << "char[5] " << sizeof(char[5]) << " bytes " << alignof(char[5]) << " bytes alineados\n";   
    //references
    cout << "bool& " << sizeof(bool&) << " bytes \n";   
    cout << "char& " << sizeof(char&) << " bytes \n";   
    cout << "int& " << sizeof(int&) << " bytes \n";   
    cout << "float& " << sizeof(float&) << " bytes \n";   
    cout << "double& " << sizeof(double&) << " bytes \n";   
    //data struct
    struct someStruct {int a; int b; double c;};
    cout << "someStruct {int a; int b; double c;} " << sizeof(someStruct) << " bytes " << alignof(someStruct{1,2,4}) << " bytes alineados\n";   
    //data class
    class someClass {int a; int b; double c; void f(){};};
    cout << "someClass {int a; int b; double c; void f(){};} " << sizeof(someClass) << " bytes\n";   
    //enumerations
    enum class Color {red, blue, green};
    cout << "enum class Color {red, blue, green} " << sizeof(Color) << " bytes " << alignof(Color) << " bytes alineados\n";   
    enum Traffic_light {green, yellow, red};
    cout << "enum Traffic_light {green, yellow, red} " << sizeof(Traffic_light) << " bytes " << alignof(Traffic_light) << " bytes alineados\n";   
}
