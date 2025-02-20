#include <iostream>
#include <vector>
/*
class Base {
public:
    void say_hello()const {
        std::cout << "Hello base class object" << std::endl;
    }
};

class Derived : public Base {
public:
    void say_hello()const {
        std::cout << "Hello derived class object" << std::endl;
    }
};

void greetings(const Base& obj) {
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {
    
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d);

    Base* ptr = new Derived();  //ptr putem sa-i atribuim o adresa a oricarui base object, Derived este un base adress
    ptr->say_hello();           //static polimorfism

    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();   //smart pointer
    ptr1->say_hello();                                          //dinamic polimorfism

    delete ptr;

    return 0;
}
*/
//=============================================================================================================================

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

int main() {

    std::cout << "\n===============Pointers===============" << std::endl;
    
    Account* ptr1 = new Account();
    Account* ptr2 = new Checking();
    Account* ptr3 = new Trust();
    Account* ptr4 = new Saving();

    ptr1->withdraw(1000);
    ptr2->withdraw(1000);
    ptr3->withdraw(1000);
    ptr4->withdraw(1000);

    std::cout << "\n===============Array===============" << std::endl;
    Account* array[] = { ptr1, ptr2, ptr3, ptr4 };   //array of pointers to account [] specifica ptr1 este account ptr2 este checking...
    for (auto i = 0; i < 4; ++i) {
        array[i]->withdraw(1000);
    }

    array[0] = ptr4;                //suprascrie primul element restul ramanand la fel
    for (auto i = 0; i < 4; ++i) {
        array[i]->withdraw(1000);
    }

    std::cout << "\n===============Vector===============" << std::endl;
    std::vector<Account*> accounts{ ptr1, ptr2, ptr3, ptr4 };
    for (auto acc_ptr : accounts) {
        acc_ptr->withdraw(1000);
    }

    std::cout << "\n===============Vector===============" << std::endl;
    accounts.push_back(ptr4);
    accounts.push_back(ptr4);
    for (auto acc_ptr : accounts) {
        acc_ptr->withdraw(1000);
    }

    std::cout << "\n===============Clean Up===============" << std::endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    delete ptr4;

    return 0;
}