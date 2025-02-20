#pragma once
#include <iostream>

using namespace std;

class Persoana {
private:
    string name;
public:
    Persoana(string name) : name(name) {}

    void afisare_nume();
};

//clasa derivata, clasa child (IS-A relashionship)
class Student : Persoana {
public:
    Student(string name) : Persoana(name) {}

    void promoveaza();
};