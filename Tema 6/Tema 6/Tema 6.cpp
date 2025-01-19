#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;
/*
//Exercitiul 1:
std::string lista1 = "masina";
char lista2[] = "avion";

//Exercitiul 2:
//O variabila de tip unsigned int poate stoca doar un numar mai mare sau egal cu 0.

//Exercitiul 3:
//cout << vector.back();

//Exercitiul 4:
int i = 0;
do {
	std::cout << i << "\n";
	i++;
} while (i < 5);

//Exercitiul 5:
void func() {
	std::string a;
	std::cin >> a;
	std::cout << a;
}

//Exercitiul 6:
int myNum = 10;

if (myNum > 0) {
	std::cout << "Valoarea este un numar pozitiv.\n";
}
else if (myNum < 0) {
	std::cout << "Valoarea este un numar negativ.\n";
}
else {
	std::cout << "Valoarea este 0.\n";
}

//Exercitiul 7:
char b[10];
std::cin.getline(b, 10);

//Exercitiul 8:
//[ a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z ]
*/
//Exercitiul 9:
//Nu, deoarece pointerul r trebuie declarat cu * in loc de &, iar valoarea pe care o primeste nu ar trebui sa aiba niciun operator.

//Exercitiul 10:
//Da, iar secventa afiseaza: -1 1.

//Exercitiul 11:
void printChar(char c)
{
	cout << c << endl;
}

int main()
{
	printChar('3');
	printChar('+');
	printChar('2');
	printChar('=');
	printChar('5');

	return 0;
}

//Exercitiul 12:
//Functia nu este declarata iar variabila a este folosita ca pointer, insa nu a fost declarata astfel.

//Exercitiul 13:
void suma(vector<int> d = { 2, 4, 6, 8 }) {
	int s = 0;
	for (int e : d) {
		s += e;
	}
}

//Exercitiul 14:
//O variabila referinta este o referinta catre o alta variabila, in timp ce o variabila pointer stocheaza adresa de memorie drept valoarea sa.

//Exercitiul 15:
void palindrom() 
{
	char f[20];
	
	cin >> f;
	
	int g = strlen(f);
	int i = 0;
	int j = g - 1;

	while (i < j && f[i] == f[j]) {
		i++;
		j--;
	}

	if (i == j)
		cout << f << " este palondrom";
	else
		cout << f << " nu este palindrom";
}