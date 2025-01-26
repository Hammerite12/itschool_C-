//Exercitiul 1:
/*
#include <iostream>
#include <string>
#include <vector>

class MyClass {
private:
    std::string name;
    std::vector<int> data;
public:
    MyClass(const std::string& n, int size);
    MyClass(const std::string& n);
    MyClass(MyClass&& n_move, MyClass&& size_move);
    void print();
};

MyClass::MyClass(const std::string& n, int size) : name(n), data(size, 0) {
    std::cout << "Constructor standard apelat" << std::endl;
}

MyClass::MyClass(const std::string& n) : name(n) {
    int data = 10;
    std::cout << "Constructor de delegare apelat" << std::endl;
}

MyClass::MyClass(MyClass&& n_move, MyClass&& size_move)
    : name(n_move.name), data(size_move.data) {
    n_move.name = nullptr;
    size_move.data = nullptr;
    std::cout << "move constructor" << std::endl;
}

void MyClass::print() {
    std::cout << name << ":" << data << std::endl;
}

int main() {
    MyClass obj1("Test", 5); // Constructorul standard 
    obj1.print();

    MyClass obj2("AnotherTest"); // Constructorul delegant 
    obj2.print();

    MyClass obj3 = std::move(obj1); // Move constructor
    obj3.print();

    return 0;
}
*/

//Exercitiul 2:

#include <iostream>

class Point {
private:
    double x;
    double y;
public:
    Point(double i, double j);

    Point operator+(Point const& obj);

    void print();
};

Point::Point(double i, double j) : x(i), y(j) {
    std::cout << "Constructor standard apelat" << std::endl;
}

Point Point::operator+(Point const& obj) {
    Point res;
    res.x = x + obj.x;
    res.y = y + obj.y;
    return res;
}

void Point::print() {
    std::cout << x << " " << y << std::endl;
}

int main() {
    Point c1(10.20, 23.45), c2(4.8, 11.22);
    Point c3 = c1 + c2;
    c3.print();

    return 0;
}