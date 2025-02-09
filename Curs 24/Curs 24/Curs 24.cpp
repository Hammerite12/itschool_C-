#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <ostream>

using namespace std;
/*
class Base {
private:
	int value;
public:
	Base() : value{ 0 } {
		cout << "Base noargs constructor" << endl;
	}
	Base(int x) : value(x) {
		cout << "int Base constructor" << endl;
	}

	Base(const Base& other) : value{ other.value } {
		cout << "Base copy constructor" << endl;
	}
	Base& operator=(const Base& rhs) {
		cout << "Base operator=" << endl;
		if (this == &rhs)
			return *this;
		value = rhs.value;
		return *this;
	}
};

class Derived : public Base {
private:
	int double_value;
public:
	Derived() : Base{} {
		cout << "Derived noargs constructor" << endl;
	}
	Derived(int x) : Base{x}, double_value(x*2) {
		cout << "int Derived constructor" << endl;
	}

	Derived(const Derived& other) : Base(other), double_value{other.double_value} {
		cout << "Derived copy constructor" << endl;
	}

	Derived& operator=(const Derived& rhs) {
		cout << "Derived operator" << endl;
		if (this == &rhs)
			return *this;
		Base::operator=(rhs);				//slice to compare with the value from derived class
		double_value = rhs.double_value;
		return *this;
	}
};
*/
//=========================================================================================================

class Account {
	friend std::ostream& operator<<(std::ostream& os, const Account& account);
protected:
	double balance;
public:
	Account();
	Account(double balance);
	void deposit(double amount);
	void withdraw(double amount);
};

Account::Account() : Account(0.0) {		//delegarea constructorului
	
}

Account::Account(double balance) : balance(balance) {

}

void Account::deposit(double amount) {
	balance += amount;
}

void Account::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "insuficient funds" << std::endl;
}

std::ostream& operator << (std::ostream& os, const Account& account) {
	os << "Account balance" << account.balance;
	return os;
}

class Saving_Account : public Account {
	friend std::ostream& operator<<(std::ostream& os, const Saving_Account& account);
protected:
	double int_rate;
public:
	Saving_Account();
	Saving_Account(double balance, double int_rate);
	void deposit(double amount);
};

Saving_Account::Saving_Account(double balance, double int_rate) : Account(balance), int_rate(int_rate) {
	
}

Saving_Account::Saving_Account() : Saving_Account(0.0, 0.0) {

}

void Saving_Account::deposit(double amount) {
	amount = amount + (amount * int_rate / 100);
	Account::deposit(amount);						//refolosirea metodei din clasa de baza (parinte/mostenire)
}

std::ostream& operator << (std::ostream& os, const Saving_Account& account) {
	os << "Saving-account balance" << account.balance << "Interest rate" << account.int_rate;
	return os;
}

int main() {
	/*
	Base b{1000};		//base int
	Base b1{ b };		//copy constructor
	b = b1;				//operatorul de suprascriere
	
	Derived d{ 2000 };
	Derived d1{ d };
	d = d1;
	*/
	//==============================================================================================

	std::cout << "\n======================Account======================" << std::endl;

	Account a1{ 1000 };
	cout << a1 << endl;

	a1.deposit(1000);
	cout << a1 << endl;

	a1.withdraw(1000);
	cout << a1 << endl;

	std::cout << "\n======================Saving_Account======================" << std::endl;

	Saving_Account s1{ 1000.5,5 };
	cout << s1 << endl;

	s1.deposit(1000);
	cout << s1 << endl;

	s1.withdraw(2000);
	cout << s1 << endl;

	s1.withdraw(1000);
	cout << s1 << endl;

	return 0;
}