#include <iostream>
#include <cstring>
#include <string>
#include <vector>
/*
class Dreptunghi {
    int latime, lungime;
public:
    Dreptunghi() {};
    Dreptunghi(int x, int y) : latime(x), lungime(y){}
    int aria() { return lungime * lungime; }
    friend Dreptunghi dubleaza(const Dreptunghi&);
};

Dreptunghi dubleaza(const Dreptunghi& param)
{
    Dreptunghi res;
    res.latime = param.latime * 2;
    res.lungime = param.lungime * 2;
    return res;
}

int main()
{
    Dreptunghi foo;
    Dreptunghi mare(2, 3);

    foo = dubleaza(mare);
    std::cout << foo.aria() << std::endl;
    return 0;
}
*/
//==================================================================
/*
class Patrat;

class Dreptunghi {
    int latime, lungime;
public:
    int aria() {
        return (latime * lungime);
    }
    void converteste(Patrat a);
};

class Patrat {
    friend class Dreptunghi;
private:
    int latura;
public:
    Patrat(int a): latura(a){}
};

void Dreptunghi::converteste(Patrat a) {
    latime = a.latura;
    lungime = a.latura;
}

int main() {
    Dreptunghi mic;
    Patrat mare(4);

    mic.converteste(mare);
    std::cout << mic.aria();
    return 0;
}
*/
//==================================================================
/*
class Account {
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

Account::Account() :balance(0.0), name{ "An Account" } {

}

Account::~Account() {

}

void Account::deposit(double amount) {
    std::cout << "Account deposit called with" << amount << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdraw called with" << amount << std::endl;
}

class Saving_Account : public Account {
public:
    double int_rate;
    void deposit(double amount);
    void withdraw(double amount);
    Saving_Account();
    ~Saving_Account();
};

Saving_Account::Saving_Account():int_rate(3.0) {

}

Saving_Account::~Saving_Account() {

}

void Saving_Account::deposit(double amount) {
    std::cout << "Saving_Account deposit called with" << amount << std::endl;
}

void Saving_Account::withdraw(double amount) {
    std::cout << "Saving_Account withdraw called with" << amount << std::endl;
}

int main() {

    std::cout << "\n=================Account=================" << std::endl;

    Account acc{};  //instantierea clasei de baza
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    std::cout << std::endl;

    Account* p_acc{ nullptr };
    p_acc = new Account{};
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    std::cout << "\n=================Saving_Account=================" << std::endl;

    Saving_Account save_acc{};  //instantierea clasei de baza
    save_acc.deposit(2000.0);
    save_acc.withdraw(500.0);

    std::cout << std::endl;

    Saving_Account* p_save_acc{ nullptr };
    p_save_acc = new Saving_Account{};
    p_save_acc->deposit(1000.0);
    p_save_acc->withdraw(500.0);
    delete p_save_acc;

    return 0;
}
*/
//==================================================================

class Base {
    //Note friends of Base have acces to all
public:
    int a{ 0 };
    void display() { std::cout << a << "," << b << "," << c << std::endl; }
protected:
    int b{ 0 };
private:
    int c{ 0 };
};

class Derived:public Base {
    //Note friends of Derived have access to only what Derived has access to
    //a wll be public
    //b will be protected
    //c will not be accesible
public:
    void access_base_member() {
        a = 100;
        b = 200;
        //c = 300;      compiler error
    }
};

int main() {
    
    std::cout << "\n=================Base member access from base objects=================" << std::endl;
    
    Base base;
    base.a = 100;
    //base.b = 200;     compiler error
    //base.c = 300;     compiler error

    std::cout << "\n=================Base member access from derived objects=================" << std::endl;

    Derived d;
    d.a = 100;
    //d.b = 200;
    //d.c = 300;

    return 0;
}