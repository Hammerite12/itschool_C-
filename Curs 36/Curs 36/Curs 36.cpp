#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <cstring>
#include <fstream>
#include <memory>
#include <iomanip>
#include <stdexcept>
#include <algorithm>

/*
template <typename T>
T maxim(T a, T b) {
	return (a > b) ? a : b;
}

int main() {

	std::cout << "Max intre 5 si 9: " << maxim(5, 9) << "\n";
	std::cout << "Max intre 3.14 si 2.71: " << maxim(3.14, 2.17) << "\n";

	return 0;
}
*/

/*
template <typename T1, typename T2>
class pereche {
public:
	T1 primul;
	T2 al_doilea;

	pereche(T1 p, T2 a) : primul(p), al_doilea(a) {

	}

	void afiseaza() {
		std::cout << "Primul: " << primul << "Al doilea: " << al_doilea << "\n";
	}
};

int main() {
	pereche <int, std::string> p1(1, "unu");
	p1.afiseaza();

	pereche <double, bool> p2(3.14, true);
	p2.afiseaza();
}
*/

/*
[capturi](parametri) -> tipul returnat {
	corpul functiei
	}
*/

/*
int main() {
	auto salut = []() {
		std::cout << "hello world!" << std::endl;
	};

	salut(); //apelam functia lambda

	auto suma = [](int a, int b) {
		return a + b;
	};

	std::cout << "Suma este: " << suma(3, 4) << std::endl;
}
*/

/*
int main() {
	std::vector<int> v = { 5, 3, 1, 4, 2 };

	std::sort(v.begin(), v.end(), [](int a, int b) {
		return a < b;
	});

	for (int x : v)
		std::cout << x << " ";
}

int factor = 10;
auto multiplicare = [factor](int x) {
	return x * factor;
}
*/

/*
-'[=]' -captureaza tot prin valoare copiere
-'[&]' -captureaza tot prin referinta
-'[x]' -captureaza doar 'x' prin valoare
-'[&x]' -captureaza doar prin 'x' prin referinta
*/

struct Produs {
	std::string nume;
	double pret;
};

int main() {
	std::vector<Produs> produse = {
		{"Laptop", 4500.0},
		{"Mouse", 80.0},
		{"Monitor", 1200.0},
		{"Tastatura", 300.0},
		{"Casti", 150.0}
	};
	
	double pret_max = 500.0;

	//folosim lambda pentru a filtra produsele ieftine
	std::vector<Produs> produse_ieftine;
	std::copy_if(produse.begin(), produse.end(), std::back_inserter(produse_ieftine), [pret_max](const Produs& p) {
		return p.pret <= pret_max;
	});

	std::cout << "Produse sub " << pret_max << " RON:\n";
	for (const auto& p : produse_ieftine) {
		std::cout << "-- " << p.nume << ": " << p.pret << " RON\n";
	}
	return 0;
}