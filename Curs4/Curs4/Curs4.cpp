#include <iostream>

using namespace std;

int main()
{   
    int romana, mate, info;
    cout << "Introduce nota de la romana: ";
    cin >> romana;
    cout << "Introduce nota de la mate: ";
    cin >> mate;
    cout << "Introduce nota de la info: ";
    cin >> info;

    if (romana > 5 ) {
        if (mate > 5) {
            if (info > 5) {
                cout << "Ai trecut la romana!" << endl;
                cout << "Ai trecut la mate!" << endl;
                cout << "Ai trecut la info!" << endl;
                cout << "Ai trecut bacul!";
            }
            else {
                cout << "Ai picat!";
            }
        }
        else {
            cout << "Ai picat!";
        }
    }
    else {
        cout << "Ai picat!";
    }
    
    return 0;
}
