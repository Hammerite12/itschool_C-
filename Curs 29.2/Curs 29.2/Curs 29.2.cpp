#include <iostream>
#include "mystring.h"
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

using namespace std;

int main() {


    Mystring x{ "SALUT" };
    x = Mystring{ "Bonjour" };
    x = "Calimera";


    Mystring a{ "hello" };          //overload constructor
    Mystring b;                     //no-arg constructor
    b = a;                          //copy assignment
    //b.operator=(a)
    b = "acesta este un test";      //b.operator=("acesta este un test")

    Mystring empty;                 //no-arg constructor
    Mystring lavinia("Lavinia");    //overload constructor
    Mystring BMW{ "bmw" };

    Mystring opel;                  //no-arg constructor
    empty = BMW;                    //copy assignment operator

    empty.display();
    lavinia.display();
    BMW.display();


    Mystring alin{ "Alin" };
    Mystring itschool{ "ITSchool" };

    Mystring stooge = alin;
    alin.display();
    itschool.display();

    std::cout << (alin == itschool) << std::endl;
    std::cout << (alin == stooge) << std::endl;

    alin.display();
    Mystring alin2 = -alin;
    alin2.display();

    Mystring stooges = alin + "ALIN";
    //Mystring stooges = "alin" + "ITSchool";     //compiler error

    Mystring two_stooges = alin + "" + "ALIN";
    two_stooges.display();

    return 0;
}
