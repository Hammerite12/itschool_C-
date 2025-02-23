#include "carte.h"

Carte::Carte(const std::string titlu, std::string autor, int an)
    : titlu(titlu), autor(autor), an(an) {
}

std::string Carte::get_titlu() const {
    return titlu;
}

std::string Carte::get_autor() const {
    return autor;
}

int Carte::get_an() const {
    return an;
}

void Carte::display() const {
    std::cout << titlu << ", de" << autor << " (" << an << ")\n";
}