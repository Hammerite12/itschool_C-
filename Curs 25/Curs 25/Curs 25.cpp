#include <iostream>
#include <string>

using namespace std;
/*
//clasa reprezinta motorul unei masini
class Engine {
private:
    string type;
public:
    Engine(string type) : type(type) {}

    void start() {
        cout << "motorul masinii " << type << " porneste" << endl;
    }
};

//class reprezinta o masina, care este ***has*** engine
class Car {
    string model;
    Engine engine;      //masina are un motor (has-a relationship)
public:
    Car(string model, string engineType) : model(model), engine(engineType) {}

    void drive() {
        cout << "Driving a " << model << " car" << endl;
        engine.start();
    }
};

int main() {
    Car my_car("Toyota", "V8");
    my_car.drive();

    return 0;
}
*/
//========================================================================================

//clasa de baza / clasa parinte
class Persoana {
private:
    string name;
public:
    Persoana(string name) : name(name) {}

    void afisare_nume() {
        cout << "Nume: " << name << endl;
    }
};

//clasa derivata / clasa child (is-a relationship)
class Student : Persoana {
public:
    Student(string name) : Persoana(name) {}

    void promoveaza() {
        cout << "Am scapat de sesiune :)" << endl;  //overriding the base class function
    }
};

int main() {
    Student studentPoli("Radu cel frumos");
    studentPoli.promoveaza();

    return 0;
}
