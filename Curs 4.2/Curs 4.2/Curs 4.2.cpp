#include <iostream>

using namespace std;

int main()
{
    char letter_grade{};
    cout << "Introduce o nota la examen: ";
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'A':
            cout << "media este peste 9" << endl;
            break;
        case 'B':
            cout << "media este peste 8" << endl;
            break;
        case 'S':
            cout << "media este peste 7" << endl;
            break;
        case 'I':
            cout << "media este peste 6" << endl;
            break;
        default:
            cout << "media este sub 5" << endl;
            break;
    }

    return 0;
}