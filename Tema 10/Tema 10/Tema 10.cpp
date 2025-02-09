#include <iostream>
#include <vector>

using namespace std;

class Magazin {
private:
    int numar;
    int cate;
    vector<int> cantitate = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    vector<double> preturi = { 5.00, 5.50, 6.00, 4.30, 4.60, 8.00, 7.55, 10.00, 15.85, 17.20, 3.50, 9.99, 10.10, 4.44, 4.87, 7.90, 5.67, 4.32, 5.64, 6.98 };
    double suma = 0.00;
    double plata;
public:
    Magazin(int n, int c) : numar(n), cate(c) {}

    void market() {
        cout << "Lista de preturi:" << endl;
        cout << endl;
        cout << "1 - Mere = 5.00" << endl;
        cout << "2 - Pere = 5.50" << endl;
        cout << "3 - Banane = 6.00" << endl;
        cout << "4 - Rosii = 4.30" << endl;
        cout << "5 - Ceapa = 4.60" << endl;
        cout << "6 - Ciuperci = 8.00" << endl;
        cout << "7 - Branza = 7.55" << endl;
        cout << "8 - Conopida = 10.00" << endl;
        cout << "9 - Sunca = 15.85" << endl;
        cout << "10 - Cereale = 17.20" << endl;
        cout << "11 - Paine = 3.50" << endl;
        cout << "12 - Gogosi = 9.99" << endl;
        cout << "13 - Cartofi = 10.10" << endl;
        cout << "14 - Patrunjel = 4.44" << endl;
        cout << "15 - Apa = 4.87" << endl;
        cout << "16 - Inghetata = 7.90" << endl;
        cout << "17 - Covrigi = 5.67" << endl;
        cout << "18 - Usturoi = 4.32" << endl;
        cout << "19 - Pepsi = 5.64" << endl;
        cout << "20 - Bomboane = 6.98" << endl;
        cout << endl;
        
        cout << "Indroduceti numarul produsului: ";
        cin >> numar;

        cout << "Indroduceti cantitatea produsului: ";
        cin >> cate;

        while (numar != 0) {
            if (numar >= 1 && numar <= 20) {
                suma += preturi.at(numar - 1) * (cantitate.at(numar - 1) - cate);
                cout << "Total: " << suma << endl;
                cout << "Indroduceti numarul produsului, daca ati terminat apasati 0: ";
            }
            else if (numar <= -1 || numar >= 21) {
                cout << "Produsul nu mai este pe stock." << endl;
                cout << "Indroduceti numarul produsului, daca ati terminat apasati 0: ";
            }
            cin >> numar;
        }
        cout << "Total plata: " << suma << endl;
        cout << "Introduceti suma de plata: ";
        cin >> plata;
        if (plata >= suma) {
            double rest = plata - suma;
            cout << "Rest: " << rest;
        }
        else {
            double datorie = suma - plata;
            cout << "Fond insuficient! Mai aveti de platit " << datorie;
        }
    }
};

int main()
{
    
}
