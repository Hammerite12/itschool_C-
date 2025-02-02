#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;
/*
class Base {
private:
    int value;
public:
    Base() : value{ 0 } {
        cout << "Base no args constructor" << endl;
    }
    Base(int x) : value{ x } {
        cout << "Base (int) overloaded constructor" << endl;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
    //using Base::Base; - C++ 11
private:
    int double_value;
public:
    Derived() : Base{}, double_value{0} {
        cout << "Derived no args constructor" << endl;
    }
    Derived(int x) : Base{x}, double_value{x * 2} {
        cout << "Derived (int) overloaded constructor" << endl;
    }
    ~Derived() {
        cout << "Derived destructor" << endl; 
    }
};

int main() {
    
    //Base b;

    //Base b{ 100 };

    //Derived d;

    Derived d{ 200 };

    return 0;
}
*/
//================================================================

class Animal {
public:
    string name;
    int varsta;

    Animal(string n, int a) : name(n), varsta(a) {}
    void display() {
        cout << "Name: " << name << ", Varsta: " << varsta << endl;
    }
};

class Caine : public Animal {
public:
    string culoare;

    Caine(string n, int a, string y) : Animal(n, a), culoare(y){}

    void display() {
        Animal::display();
        cout << "Culoare: " << culoare << endl;
    }

};

int main() {
    
    Caine x("Billy", 2, "negru");

    x.display();

    return 0;
}