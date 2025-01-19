#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

class Mystring {
private:
    char* str;
    int len;
public:
    Mystring();                         //no args constructor
    Mystring(const char* s);            //overloaded constructor
    Mystring(const Mystring& source);   //copy constructor
    Mystring(Mystring&& source);        //move constructor
    ~Mystring();                        //destructor

    Mystring& operator = (const Mystring& rhs);   //copy assignment
    Mystring& operator = (Mystring&& rhs);        //move assignment

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
    :str(nullptr) {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Move constructor
Mystring::Mystring(Mystring&& source)
    :str(source.str) {
    source.str = nullptr;
    std::cout << "move constructor" << std::endl;
}

Mystring::~Mystring() {
    delete[] str;
}

//copy assignment
Mystring& Mystring ::operator=(const Mystring& rhs) {
    std::cout << str << "copy assignment" << std::endl;

    if (this == &rhs)       //p1=p1
        return *this;       //return curent object

    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);

    return *this;           //return curent object
}

//move assignment
Mystring& Mystring::operator = (Mystring&& rhs) {
    std::cout << "USING MOVE ASSIGNMENT" << std::endl;
    
    if (this == &rhs)       //self assignment
        return *this;       //return curent object
    
    delete[]str;            //dealocate the curent object
    str = rhs.str;          //steal the pointer
    rhs.str = nullptr;      //null out the rhs object
    
    return *this;
}

void Mystring::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const { return std::strlen(str); }

const char* Mystring::get_str() const { return str; }

int main() {

    Mystring x{ "SALUT" };
    x = Mystring{ "Bonjour" };
    x = "Calimera";

    /*
    Mystring a{ "hello" };          //overloaded constructor
    Mystring b;                     //no-arg constructor
    b = a;                          //copy assignment
                                    //b.operator=(a)
    b = "acesta este un test";      //b.operator=("acesta este un test")

    Mystring s1{ "alin" };
    Mystring s2 = s1;               //Not assigment
                                    //acelasi lucru cu Mystring s2{ s1 };
    s1 = s2;                        //assignment

    Mystring empty;                 //no-arg constructor
    Mystring lavinia("Lavinia");    //overload constructor
    Mystring BMW{ "bmw" };

    Mystring opel;                  //no-arg constructor
    empty = BMW;                    //copy assignment operator

    empty.display();
    lavinia.display();
    BMW.display();
    */
    return 0;
}