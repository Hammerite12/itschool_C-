#include <iostream>
#include <vector>
/*
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {
        std::cout << "Destructor Account::withdraw" << std::endl;
    };
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {
        std::cout << "Destructor Checking::withdraw" << std::endl;
    };
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {
        std::cout << "Destructor Trust::withdraw" << std::endl;
    };
};

class Saving : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Saving::withdraw" << std::endl;
    }
    virtual ~Saving() {
        std::cout << "Destructor Saving::withdraw" << std::endl;
    };
};

void do_withdraw(Account& account, double amount) {
    account.withdraw(amount);
}

int main()
{
    Account a;
    Account& ref = a;
    ref.withdraw(1000);

    Trust t;
    Account& ref1 = t;
    ref1.withdraw(1000);

    do_withdraw(a, 2000);

    Saving s;
    do_withdraw(s, 10);

    return 0;
}
*/
//========================================================================================================================

class Shape {                   //abstract base class
private:
                                //attributes common to all shapes
public:
    virtual void draw() = 0;    //pure virtual function; declarate cu = 0, asta o face o clasa abstracta
    virtual void rotate() = 0;  //pure virtual function
    virtual ~Shape(){}
};

//
class Open_shape :public Shape {    //abstract class
public:
    virtual ~Open_shape() {};
};

class Close_shape :public Shape {   //abstract class
public:
    virtual ~Close_shape() {};
};

//concrete class must implement it
//Derived class MUST override base class
class Line :public Open_shape {     //concrete class
public:
    virtual void draw()override {
        std::cout << "Line::drawing line" << std::endl;
    }
    virtual void rotate()override {
        std::cout << "Line::rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle :public Close_shape {  //concrete class
public:
    virtual void draw()override {
        std::cout << "Circle::drawing line" << std::endl;
    }
    virtual void rotate()override {
        std::cout << "Circle::rotating a line" << std::endl;
    }
    virtual ~Circle() {}
};

class Squart :public Close_shape {  //concrete class
public:
    virtual void draw()override {
        std::cout << "Squart::drawing line" << std::endl;
    }
    virtual void rotate()override {
        std::cout << "Squart::rotating a line" << std::endl;
    }
    virtual ~Squart() {}
};

void screen_refreshing(std::vector<Shape*> shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p : shapes)
        p->draw();
}

int main() {
    
    //Shape s;                  cannot instantiate class
    //Shape* p = new Shape();   compiler error

    //Circle c;
    //c.draw();

    Shape* c = new Circle();
    c->draw();
    c->rotate();

    Shape* ptr = new Circle();
    Shape* ptr1 = new Line();
    Shape* ptr2 = new Squart();

    std::vector<Shape*> shapes{ ptr, ptr1, ptr2 };
    //for (const auto p : shapes)
        //p->draw();

    screen_refreshing(shapes);

    delete ptr, ptr1, ptr2;

    return 0;
}