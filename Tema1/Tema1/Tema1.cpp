#include <iostream>
#include <string>

using namespace std;

void my_func_rezolvare_ex345() {

    int myNumber = 50;                                              //Rezolvare exercitiul 1
    double myNumber1 = 75.5;                                        //Rezolvare exercitiul 2

    myNumber++;                                                     //Rezolvare exercitiul 3     
    myNumber1--;

    int suma;                                                       //Rezolvare exercitiul 4
    suma = myNumber + myNumber1;
    double sumareal;
    sumareal = myNumber + myNumber1;

    int rest;                                                       //Rezolvare exercitiul 5
    suma *= 5;
    rest = suma % 12;
    cout << "Valoarea variabilei rest: " << rest << endl;
    suma /= 12;
    sumareal *= 5;
    sumareal /= 12;
}

void my_func_rezolvare_ex6789() {
    string nume = "Ciocan";                                         //Rezolvare exercitiul 6
    string prenume = "Ionut";                                       //Rezolvare exercitiul 7

    string nume_complet = nume + prenume;                           //Rezolvare exercitiul 8

    string sirul_meu = "Acesta este continutul initial al sirului"; //Rezolvare exercitiul 9
    cout << sirul_meu << endl;
}

int my_func_rezolvare_ex10(int a, int b, int c) {                   //Rezolvare exercitiul 10
    if ((a < b) && (a < c)) {
        return a;
    }
    else if ((b < a) && (b < c)) {
        return b;
    }
    else if ((c < a) && (c < b)) {
        return c;
    }
}

int my_func_rezolvare_ex11(int a, int b, int c) {                   //Rezolvare exercitiul 11
    if ((a > b) && (a > c)) {
        return a;
    }
    else if ((b > a) && (b > c)) {
        return b;
    }
    else if ((c > a) && (c > b)) {
        return c;
    }
}

void my_func_rezolvare_ex12() {                                     //Rezolvare exercitiul 12
    const double a = 23.6;
    double b = a * 72;
    if (1500.3 > b) {
        cout << "1500.3 este mai mare decat " << b << endl;
    }
    else {
        cout << b << " este mai mare decat 1500.3" << endl;
    }
}

unsigned int my_func_rezolvare_ex13(double y) {                     //Rezolvare exercitiul 13
    double z = 11.4;
    double k = y / z;
    k = unsigned int(k);
    return k;
}

//Pentru exercitiul 14, raspunsul corect este Varianta 2.

void my_func_rezolvare_ex15() {                                     //Rezolvare exercitiul 15
    unsigned int var = 3;
    var = var << 1;
    cout << "Shiftare stanga: " << var << endl;
    var = var >> 1;
    cout << "Shiftare dreapta: " << var << endl;
}

int main()
{
    cout << "Afisare exercitiul 5:" << endl;
    my_func_rezolvare_ex345();
    cout << endl;

    cout << "Afisare exercitiul 9:" << endl;
    my_func_rezolvare_ex6789();
    cout << endl;

    unsigned int a = 7;
    unsigned int b = 9;
    unsigned int c = 3;
    unsigned int result10 = my_func_rezolvare_ex10(a, b, c);
    cout << "Afisare exercitiul 10:" << endl;
    cout << "Valoarea variabilei result10: " << result10 << endl;
    cout << endl;

    a = 72.3;
    b = 1387.12344;
    c = 6;
    unsigned int result11 = my_func_rezolvare_ex11(a, b, c);
    cout << "Afisare exercitiul 11:" << endl;
    cout << "Valoarea variabilei result11: " << result11 << endl;
    cout << endl;

    cout << "Afisare exercitiul 12:" << endl;
    my_func_rezolvare_ex12();
    cout << endl;

    double y = 2379.8909;
    unsigned int k;
    k = my_func_rezolvare_ex13(y);
    cout << "Afisare exercitiul 13:" << endl;
    cout << "Valoarea variabilei k: " << k << endl;
    cout << endl;

    cout << "Afisare exercitiul 15:" << endl;
    my_func_rezolvare_ex15();

    return 0;
}
