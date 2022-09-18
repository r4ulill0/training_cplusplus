// Coger las declaraciones y ponerles una definición.
// Coger las definiciones y ponerles una declaracion por separado.
// char ch;
// string s;
// auto count = 1;
// const double pi {3.1415926535897};
// extern int error_number;
// const char∗ name = "Njal";
// const char∗ season[] = { "spring", "summer", "fall", "winter" };
// vector<string> people { name, "Skarphedin", "Gunnar" };
// struct Date { int d, m, y; };
// int day(Date∗ p) { return p−>d; }
// double sqrt(double);
// template<class T> T abs(T a) { return a<0 ? −a : a; }
// constexpr int fac(int n) { return (n<2)?1:n∗fac(n−1); } // possible compile-time evaluation (§2.2.3)
// constexpr double zz { ii∗fac(7) }; // compile-time initialization
// using Cmplx = std::complex<double>; // type alias (§3.4.5, §6.5)
// struct User; // type name
// enum class Beer { Carlsberg, Tuborg, Thor };
// namespace NS { int a; }
#include <complex>
#include <string>
#include <vector>
using namespace std;


struct Date { int d, m, y; };
template<class T> T abs(T a) ;
template<class T> T abs(T a) {return a<0 ? -a : a;};
constexpr int fac(int n);
constexpr int fac(int n){ return (n<2)?1:n*fac(n-1); }; // possible compile-time evaluation (§2.2.3)

int main() {
    char ch;
    ch = 'a';

    string s;
    s = "hola";

    int count;
    count = 1;

    const double pi = 3.1415;

    int error_number = 5;

    const char* name = "Njal";

    char* season;
    //season[0] = "spring";
    //season[1] = "summer";
    //season[2] = "fall";
    //season[3] = "winter";

    vector<string> people;
    //people { name, "Skarphedin", "Gunnar" };

    Date a {12, 3, 5};
    const int ii = 8;
    constexpr double zz { ii*fac(7) }; // compile-time initialization
    using Cmplx = std::complex<double>; // type alias (§3.4.5, §6.5)
    struct User; // type name
    struct User { int a;};
    enum class Beer;
    enum class Beer ;
    enum class Beer { Carlsberg, Tuborg, Thor };
}
    namespace NS {};
    namespace NS { int a; }
    int day(Date* p);
    int dat(Date* p) { return p->d; };
    double sqrt(double);
    double sqrt(double d) { return 0.3;};
