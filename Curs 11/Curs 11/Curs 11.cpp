#include <iostream>
#include <string>

using namespace std;
/*class Player {
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val) {
        name = name_val;
    }
    Player();
    Player(string name);
    Player(string name, int health, int xp);
};*/
/*
string get_name() {
    return name;
}
*/
/*Player::Player()
    : name{ "niciunul" }, health{ 0 }, xp{ 0 } {}

Player::Player(string name_val)
    : name{ name_val }, health{ 0 }, xp{ 0 } {}

Player::Player(string name_val, int health_val, int xp_val)
    : name{ name_val }, health{ health_val }, xp{ xp_val } {
}*/
/*
~Player() {
    cout << "destructor apelat pentru" << name << endl;
}
*/
//==============================================================

class Matematica {
private:
    int a;
    int b;

public:
    void adunare(int a_val, int b_val) {
        a = a_val;
        b = b_val;
        cout << a + b << endl;
    }

    void scadere(int a_val, int b_val) {
        a = a_val;
        b = b_val;
        cout << a - b << endl;
    }
};

int main()
{
    /*Player frank;
    Player jim;

    Player* fotbalist = new Player;
    delete fotbalist;

    frank.set_name("Frank");
    //cout << frank.get_name() << endl;

    Player hero("Hero");
    hero.set_name("Hero");

    Player vivian("Vivian", 100, 12);
    vivian.set_name("Vivian");

    Player* eny = new Player;
    eny->set_name("Eny");

    Player* trio = new Player("Trio", 50, 13);
    trio->set_name("Trio");

    delete eny;
    delete trio;*/

    //==============================================

    Matematica operatie;
    operatie.adunare(4, 5);
    operatie.scadere(4, 5);

    return 0;
}
