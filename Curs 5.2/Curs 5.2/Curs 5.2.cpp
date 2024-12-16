#include <iostream>

using namespace std;

int main()
{
    /*int n;
    bool a = true;*/

    /*for (i = 0; i <= 10; i+=2) {
        cout << i << endl;
    }*/

    /*while (a) {
        cin >> n;
        if (n >= 10 && n <= 20) {
            cout << "Numarul este intre 10 si 20" << endl;
        }
        else {
            a = false;
        }
    }*/

    /*char selectie{};

    do {
        double width {}, height {};

        cin >> width >> height;
        double aria {width * height};

        cout << aria << endl;

        cout << "Calculezi din nou? Y/N: ";
        cin >> selectie;

    } while (selectie == 'Y' || selectie == 'y');*/

    int selectie{};

    do {
        cin >> selectie;
        switch (selectie) {
            case 1:
                cout << "Ai ales varianta 1." << endl;
                break;
            case 2:
                cout << "Ai ales varianta 2." << endl;
                break;
            case 3:
                cout << "Ai ales varianta 3." << endl;
                break;
            default:
                cout << "Mai incearca." << endl;
                break;
        }

    } while (selectie == 1 || selectie == 2 || selectie == 3);

    return 0;
}

//Bucle infinite:
    /*
    for(;;)
    while()
    do {

    } while (1);*/