/*
#include <iostream>
#include <string>

using namespace std;

// Exercitiul 1 (cu structuri):
struct meteo{
    string zi;
    int temp;
};

int main()
{
    meteo zi_temp[7] = {
        {"Luni", 24},
        {"Marti", 20},
        {"Miercuri", 22},
        {"Joi", 24},
        {"Vineri", 21},
        {"Sambata", 18},
        {"Duminica", 24}
    };

    int max = 0;
    for (int i = 0; i < 7; i++) {
        if (zi_temp[i].temp > max) {
            max = zi_temp[i].temp;
        }
    }

    cout << "Zilele cu temperatura maxima:" << endl;
    for (int i = 0; i < 7; i++) {
        if (zi_temp[i].temp == max) {
            cout << zi_temp[i].zi << " " << zi_temp[i].temp << "^C" << endl;
        }
    }

    return 0;
}
*/
//=====================================================================================

#include <iostream>
#include <string>

using namespace std;

// Exercitiul 2:
class Angajat {

private:
    string nume;
    int zile;
    float salariu;
    float salariu_total;

public:
    Angajat(string n, int z, float s) {
        nume = n;
        zile = z;
        salariu = s;
    }

    float getSalariu() {
        salariu_total = (salariu * 8) * zile;
        return salariu_total;
    }
    
    void display() {
        cout << "Nume: " << nume << endl;
        cout << "Zile lucrate: " << zile << endl;
        cout << "Salariu: " << salariu_total << endl;
    }
};

int main()
{
    Angajat angajat("Ionut", 10, 80);
    angajat.getSalariu();
    angajat.display();

    return 0;
};
