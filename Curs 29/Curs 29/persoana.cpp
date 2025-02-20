#include <iostream>
#include "persoana.h"

using namespace std;

void Persoana::afisare_nume() {
    cout << name << endl;
}

//clasa derivata, clasa child (IS-A relashionship)
void Student::promoveaza() {
    cout << "Am scapat de sesiune" << endl; //overriding the base class function
}