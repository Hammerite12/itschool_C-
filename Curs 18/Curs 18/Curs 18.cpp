/*#include <iostream>
#include <string>
#include <vector>
#include <cstring>

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const& obj) {
        
        Complex res;

        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void print() { std::cout << real << "+ i" << imag << '\n'; }

};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
*/
//====================================================================
/*
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

class Dacia {
private:
    string model;
    int pret;

public:
    Dacia(string m, int p) : model(m), pret(p) {}

    bool operator==(const Dacia& obj) const {
        return (model == obj.model && pret == obj.pret);
    }

    void print() const {
        cout << "Model: " << model << ", Pret: " << pret << " euro" << endl;
    }
};

int main() {
    Dacia car1("Logan", 12000);
    Dacia car2("Duster", 20000);

    car1.print();
    car2.print();

    if (car1 == car2) {
        cout << "Masinile sunt echivalente." << endl;
    }
    else {
        cout << "Masinile NU sunt echivalente." << endl;
    }

    return 0;
}
*/
//====================================================================

#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

class Mystring {
private:
    char* str;
    int len;
public:
    Mystring();                         //no args constructor
    Mystring(const char* s);            //overloaded constructor
    Mystring(const Mystring& source);   //copy constructor
    ~Mystring();                        //destructor
    void display() const;
    int get_length() const;
    const char* get_str() const;
};

Mystring::Mystring()
    :str{ nullptr } {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char* s)
    :str(nullptr) {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring& source)
    :str(nullptr){
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::~Mystring() {
    delete [] str;
}

void Mystring::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const { return std::strlen(str); }

const char* Mystring::get_str() const { return str; }

int main() {

    Mystring empty;
    Mystring lavinia("Lavinia");
    Mystring BMW{ "bmw" };

    empty.display();
    lavinia.display();
    BMW.display();

    return 0;
}