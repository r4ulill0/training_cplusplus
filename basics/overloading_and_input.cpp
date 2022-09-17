#include <iostream>

class Info {
public:
    std::string name;
    int age;
    Info() {

    }

    std::istream& operator<<(std::istream& input) {
        std::cout << "Operador de instancia\n";
        std::cout << "Please enter your name and age:\n";
        input >> name;
        input >> age;

        return input;
    }

    std::ostream& operator>>(std::ostream& output) {
        std::cout << "Operador de instancia\n";
         return output << "Name: " << name << " Age: " << age << "\n";
    }

};

std::istream& operator>>(std::istream& input, Info& info) {
    std::cout << "Operador estático\n";
    std::cout << "Please enter your name and age:\n";
    input >> info.name;
    input >> info.age;
    return input;
}

std::ostream& operator<<(std::ostream& output, Info& info) {
    std::cout << "Operador estático\n";
    return output << "Name: " << info.name << " Age: " << info.age << "\n";
}

int main() {
    std::string name;
    int age;

    Info somePerson = Info();
    somePerson << std::cin;
    somePerson >> std::cout;
    std::cin >> somePerson;
    std::cout << somePerson;
}
