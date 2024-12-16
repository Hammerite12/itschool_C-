#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
class Player {

    //atribute
    string name;
    int health;
    int xp;

    //metode
    void talk(string text) { cout << name << "!" << endl; }; // in structuri nu se pot folosi functii
    bool alive();

};
*/
//====================================================
/*
class Adunare {
 private:
     int a, b;

 public:
     void afisare() { cout << "b" << endl; };

     void seteaza(int, int);

};

void Adunare::seteaza(int x, int y) {
    int suma = x + y;
}

//======================================================
*/
class Cont {
private:
    string name;
    int cnp;

public:
    void afisare(string text, int numar) { cout << text << " " << numar << endl; }
};

void Cont::afisare(string text, int numar) { cout << text << " " << numar << endl; }

int main()
{
    /*
    Player Vlad;

    Vlad.talk("Hi there");

    Player* prieten = new Player;

    //(*prieten).name = "Andrei";

    //prieten -> talk("Andrei!");

    Vlad.talk("Hi there");
    */
    //====================================
    /*
    Adunare plus;

    plus.seteaza(3, 4);
    plus.afisare();
    */
    //====================================

    Cont obiect;

    Cont* obiect2 = new Cont;

    obiect2 -> afisare("Ionut", 24);

    obiect.afisare("Ionut", 24);

    return 0;
}