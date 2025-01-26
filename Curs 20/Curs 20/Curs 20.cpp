#include <iostream>

void swapval(int a, int b) {
	
	int aux;
	
	aux = a;
	a = b;
	b = aux;

}

void swapref(int& a, int& b) {
	
	int aux;

	aux = a;
	a = b;
	b = aux;

}

void swapadd(int* a, int* b) {

	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

	delete[]a;

}

const int *k = nullptr;

int const* k = nullptr;

const int*const k = nullptr;

char x = 'a';

char x[] = "hello";

char* x = &x;

int main() {

	int x, y;

	swapadd(&x, &y);

}