/*Sa se implementeze o aplicatie biblieoteca in care sa avem 10 carti(titlu autor an publicare)pe care sa le putem imprumuta 
sa aranjeze per categorie(e.g.beletristica, istoria, bibliografie) rand, raft.

1.aplicatie sa fie structurata pe mai multe fisiere cpp
2.aplicatia sa utilizeze abstract classess as interfaces
*/

#include <iostream>
#include "carte.h"
#include "biblioteca.h"

int main() {
    
    Biblioteca biblioteca;
    int optiune;

    while (true) {
        biblioteca.display();
        std::cout << "1. Imprumuta o carte\n" << "2. Returneaza o carte\n" << "0. Iesire\n";
        std::cout << "Alege optiunea: ";
        std::cin >> optiune;

        if (optiune == 0) break;

        if (optiune == 2) {
            
            continue;
        }

        std::cout << "Introdu numele cartii: ";
        std::cin.ignore();
        getline(cin, titlu);
    }

    return 0;
}
