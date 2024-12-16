#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Indroduceti doua numere: ";
    cin >> a >> b;

    if (a != b) {
        (a > b) ? cout << "Cel mai mare numar este " << a : cout << "Cel mai mare numar este " << b;
    }
    else {
        cout << "Numerele sunt identice.";
    }
    return 0;
}