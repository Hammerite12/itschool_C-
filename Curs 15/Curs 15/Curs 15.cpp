#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
class Shallow {
private:
    int* data;                      //pointer
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    Shallow(int d);                 //constructor
    Shallow(const Shallow& source); //copy
    ~Shallow();                     //destructor
};

Shallow::Shallow(int d) {
    data = new int;                 //alocare de memories
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data) {
    cout << "desctructor release data" << endl;
}

Shallow::~Shallow() {
    delete data;
    cout << "descructor eliberand data" << endl;
}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
}

class Deep {
private:
    int* data;                      //pointer
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    Deep(int d);
    Deep(const Deep& source);
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep& source)
:Deep(*source.data) {
    cout << "Copy constructor- deep copy" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "destructor release data" << endl;
}

void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}
*/
class Move {
private:
    int* data;      //raw pointer
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    Move(int d);
    Move(const Move& source);
    Move(Move&& source) noexcept;
    ~Move();
};

Move::Move(int d) {
    data = new int;
    *data = d;
    cout << "constructor pentru: " << d << endl;
}
/*
//copy constructor
Move::Move(const Move& source)
    :Move(*source.data) {
    cout << "copy constructor - deep copy for: " << *data << endl;
}
*/
//move constructor
Move::Move(Move&& source)noexcept
    :data(source.data) {
    source.data = nullptr;
    cout << "Move constructor -move resource" << *data << endl;
}

Move::~Move() {
    if (data != nullptr) {
        cout << "destructor free data for: " << *data << endl;
    }
    else {
        cout << "destructor free data for nullptr " << endl;
    }
    delete data;
}

class moveClass {
private:
    int* p;
public:
    moveClass(int d) {
        p = new int;
        *p = d;
        cout << "constructorul default este apelat" << d << endl;
    };

    moveClass(moveClass&& source)
        :p{ source.p }
    {
        cout << "constructorul move este apelat pentru" << *source.p << endl;
        source.p = nullptr;
    }

    ~moveClass() {
        cout << "destructor invocat!" << endl;
        delete p;
    }
};

class pointerThis {
private:
    int x;
public:
    void setX(int x)
    {
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }

    void prod(int x) {
        int P;
        P = this->x * x;
        
        cout << P;
    }
};

int main()
{
    pointerThis obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    obj.prod(x);

    return 0;
}