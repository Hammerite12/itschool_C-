#include <iostream>
#include <string>

// Exercitiul 1:
/*
class Cutie {
private:
    int lungime, latime, inaltime;
public:
    Cutie(int x, int y, int z) : lungime(x), latime(y), inaltime(z){}
    void dimensiuni() {
        std::cout << "Lungime: " << lungime << "\nLatime: " << latime << "\nInaltime: " << inaltime << std::endl;
    }
    friend class Friend;
};

class Friend {
private:
    int lungime, latime, inaltime;
public:
    void volum(Cutie& c) {
        std::cout << c.lungime * c.latime * c.inaltime << std::endl;
    }
    void dubleaza(Cutie& c) {
        Friend res;
        res.lungime = c.lungime * 2;
        res.latime = c.latime * 2;
        res.inaltime = c.inaltime * 2;
    }
};

int main()
{
    Cutie cutiemica(2, 5, 3);
    Friend cutiemare;
    int v;

    cutiemica.dimensiuni();
    v = volum(cutiemica);
    cutiemare = dubleaza(cutiemica);
    std::cout << cutiemare;
    
    return 0;
}
*/
//=================================================================

// Exercitiul 2:

class Persoana {
private:
    std::string nume;
    int varsta;
public:
    Persoana(std::string n, int v) : nume(n), varsta(v) {}
    void afisare() {
        std::cout << "Nume: " << nume << ", Varsta: " << varsta << std::endl;
    }
};

class Angajat : public Persoana {
public:
    std::string functie;

    Angajat(std::string n, int v, std::string f) : Persoana(n, v), functie(f) {}

    void afisare() {
        Persoana::afisare();
        std::cout << "Functie: " << functie << std::endl;
    }
};

int main() {

    Angajat x("Ionut", 24, "Game Tester");

    x.afisare();

    return 0;
}
