/*#include <iostream>
#include <string>

class MyClass {
private:
    std::string nume;
    int varsta;
public: 
    MyClass(std::string n, int v) : nume(n), varsta(v) {
        std::cout << "Constructorul parametrizat apelat" << std::endl;
    }

    M

    void afis() const {
        std::cout << "Nume: " << nume << ", Varsta: " << varsta << std::endl;
    }
};

int main()
{
    MyClass obj("Ionut", 24);
    obj.afis();

    return 0;
}
*/

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

    Mystring operator-()const;                      //lowercase
    Mystring operator+(const Mystring& rhs)const;   //concatenate
    bool operator==(const Mystring& rhs)const;      //egalitate

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

//egalitate
bool Mystring::operator==(const Mystring& rhs)const {
    return (std::strcmp(str, rhs.str) == 0);
}

//make lowercase
Mystring Mystring::operator-()const {
    char* buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);

    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
        Mystring temp{ buff };
    delete[]buff;
    return temp;
}

//concatenate
Mystring Mystring::operator+(const Mystring& rhs)const {
    char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];

    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{ buff };
    delete[] buff;
    return temp;
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

    Mystring a{ "hello" };          //overloaded constructor
    Mystring b;                     //no-arg constructor
    b = a;                          //copy assignment
                                    //b.operator=(a)
    b = "acesta este un test";      //b.operator=("acesta este un test")

    Mystring s1{ "ionut" };
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
    
    Mystring ionut{ "Ionut" };
    Mystring itschool{ "ITSchool" };

    Mystring stooge = ionut;
    ionut.display();
    itschool.display();

    std::cout << (ionut == itschool) << std::endl;
    std::cout << (ionut == stooge) << std::endl;

    ionut.display();
    Mystring ionut2 = -ionut;
    ionut2.display();

    Mystring stooges = ionut + "" + "IONUT";
    //Mystring stooges = "ionut" + "ITSchool";      //compiler error

    Mystring two_stooges = ionut + "" + "IONUT";
    two_stooges.display();

    return 0;
}