#include <iostream>
#include <cstring>

using namespace std;

// Exercitiul 1
void ex1(int array[], int n) {
    int* ptr = array;
    cout << "Introduceti elementele array-ului:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Afisarea array-ului cu pointer:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
}

// Exercitiul 2
void ex2(int x) {
    int f = 1;
    int* f_ptr = &f;
    for (int i = 2; i <= x; i++) {
        *f_ptr *= i;
    }
    cout << "Factorialul numarului: " << f << endl;
}

// Exercitiul 3
void ex3(char sc[]) {
    int v = 0;
    int c = 0;
    int* v_ptr = &v;
    int* c_ptr = &c;
    char voc[] = "AEIOUaeiou";
    int n = strlen(sc);
    for (int i = 0; i < n; i++) {
        if (strchr(voc, sc[i]) == 0) {            
            (*c_ptr)++;
        }
        else {
            (*v_ptr)++;
        }
    }
    cout << "Nr. vocale: " << v << endl;
    cout << "Nr. consoane: " << c << endl;
}

// Exercitiul 4:
void ex4(int ac[], int m) {
    int* ptr = ac;
    cout << "Introduceti elementele array-ului:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> ac[i];
    }
    int aux;
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (ac[i] > ac[j]) {
                aux = ac[i];
                ac[i] = ac[j];
                ac[j] = aux;
            }
        }
    }
    cout << "Array-ul ordonat crescator:" << endl;
    for (int i = 0; i < m; i++) {
        cout << *(ptr + i) << " ";
    }
}

    int main()
{   
    cout << "Exercitiul 1:" << endl;
    int n;
    cout << "Introduceti dimensiunea array-ului: ";
    cin >> n;
    int* array = new int[ n ];
    ex1(array, n);
    cout << endl;
    cout << endl;
    
    cout << "Exercitiul 2:" << endl;
    int x;
    cout << "Introduecti un numar: ";
    cin >> x;
    ex2(x);
    cout << endl;
    
    cout << "Exercitiul 3:" << endl;
    char cuv[100];
    cout << "Introduecti un cuvant: ";
    cin >> cuv;
    ex3(cuv);
    cout << endl;
    
    cout << "Exercitiul 4:" << endl;
    int m;
    cout << "Introduceti dimensiunea array-ului: ";
    cin >> m;
    int* ac = new int[m];
    ex4(ac, m);
    cout << endl;

    return 0;
}

