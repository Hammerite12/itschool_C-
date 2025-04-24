#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <cstring>
#include <fstream>
#include <memory>
#include <iomanip> //setw, setfill, stanga, dreapta
#include <stdexcept>

#define DEBUG 1;	//debug mode
#define ERROR_DIMENSIUNE_MATRICE 242

using namespace std;
/*
try {
	//cod care ar putea arunca o exceptie
	throw "A aparut o eroare!";
}
catch (const char* e) {
	//cod care trateaza exceptia
	cout << "exceptie: " << e << endl;
}

try {
	throw string("eroare grava!");
}
catch (const string& e) {
	cout << "Mesaj: " << e << endl;
}

try {
	throw 3.14;
}
catch (int i) {
	cout << "int: " << i << endl;
}
catch (double d) {
	cout << "double: " << d << endl;
}

class Exceptie {
public:
	const char* mesaj() const {
		return "Eroare din tabela de erori";
	}
};

int main() {
	try {
		throw Exceptie();
	}
	catch (const Exceptie& e) {
		cout << e.mesaj() << endl;
	}
}
*/
//================================================================================

vector<vector<int>>citesteMatricea(const string& numeFisier) {
	ifstream fin(numeFisier);
	if (!fin.is_open()) {
		throw runtime_error("Fisierul nu a putut fi deschis.");
	}

	int n;
	fin >> n;
	if (n <= 0) {
		throw invalid_argument("Dimensiunea matricei trebuie sa fie pozitiva.");//return ERROR_DIMENSIUNE_MATRICE;
	}

	vector<vector<int>> matrice(n, vector<int>(n));

	for (int i=0; i<n; i++)
		for (int j=0; j<n; ++j)
			if (!(fin >> matrice[i][j])) {
				throw runtime_error("fisierul contine date invalide sau insuficiente.");
			}
	return matrice;
}

//calculeaza determinatul unei matrice 2x2
int calculeazaDeterminant(const vector<vector<int>>& m) {
	if (m.size() != m[0].size()) {
		throw logic_error("matricea nu este patrata.");
	}

	if (m.size() == 2) {
		return m[0][0] * m[1][1] - m[0][1] * m[1][0];
	}

	throw runtime_error("doar matrici 2x2 sunt suportate");

}

int main() {
	try {
		auto matrice = citesteMatricea("matrice.txt");
		int det = calculeazaDeterminant(matrice);

		cout << "determinantul este:" << det << endl;
	}
	catch (const exception& e) {
		cerr << "eroare: " << e.what() << endl;
	}
	return 0;
}


int main() {
	int c, a = 100, b = 0;

#if DEBUG
	if (a == 0) {
		cout << "nu se poate imparti la 0" << endl;
	}
#endif
	c = a / b;

	return 0;
}