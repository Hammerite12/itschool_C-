#include <iostream>
#include <string>

using namespace std;
/*
struct biblioteca {
    string categorie;
    string carte;
    int rand;
};
*/
struct Elev {
    string nume;
    string prenume;
    int varsta;
    double media_mate;
    double media_romana;
    double media_istorie;
};

void citire_elev(Elev &primul) {
    cout << "Nume: "; cin >> primul.nume;
    cout << "Prenume: "; cin >> primul.prenume;
}

void afisare_elev(Elev primul) {
    cout << "Nume: "; cout << primul.nume << endl;
    cout << "Prenume: "; cout << primul.prenume << endl;
}

int main()
{   
    /*biblioteca Bibicescu;
    biblioteca Central;

    Bibicescu.categorie = "Fictiune";
    Bibicescu.carte = "Starcraft";
    Bibicescu.rand = 12;

    Central.categorie = "Beletristica";
    Central.carte = "Ion Creanga";
    Central.rand = 1;

    struct {
        int an;
        string model;
        string brand;
    }myCar, myCar1, myCar2;

    myCar.an = 1975;
    myCar.brand = "Ford";
    myCar.model = "Focus";

    myCar1.an = 2006;
    myCar1.brand = "BMW";
    myCar1.model = "X3";

    myCar2.an = 2020;
    myCar2.brand = "Honda";
    myCar2.model = "Civic";

    cout << myCar.an << " " << myCar.brand << " " << myCar.model << endl;
    cout << myCar1.an << " " << myCar1.brand << " " << myCar1.model << endl;
    cout << myCar2.an << " " << myCar2.brand << " " << myCar2.model << endl;
    */
    //=======================================================================

    



    return 0;
}