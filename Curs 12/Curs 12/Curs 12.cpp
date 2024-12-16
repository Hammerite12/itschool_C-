#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;

public:

    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val, int health_val, int xp_val);

    Player(const Player& source);

    ~Player() { cout << "Destructor apelat pentru: " << name << endl; }

};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{ name_val }, health{ health_val }, xp{ xp_val } {
    cout << "trei parametrii ai constructorului" + name << endl;
}

Player::Player(const Player& source)
    :name{ source.name }, health{ source.health }, xp{ source.xp } {
    //:Player{ source.name, source.health, source.xp }{
    cout << "copy constructor - facem o copiere" << endl;
}

void display_player(Player p) {
    cout << "Name:" << p.get_name() << endl;
    cout << "Health:" << p.get_health() << endl;
    cout << "XP:" << p.get_xp() << endl;
}

int main()
{
    Player empty{"xxxx", 100, 50};
    
    display_player(empty);

    return 0;
}