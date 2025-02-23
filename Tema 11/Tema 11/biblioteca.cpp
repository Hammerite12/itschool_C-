#include "biblioteca.h"
#include <iostream>

Biblioteca::Biblioteca() {
    carti = {
        {"The Way of Shadows", "Brent Weeks", 2008},
        {"The Way of Kings", "Brandon Sanderson", 2010},
        {"A Game of Thrones", "George R.R. Martin", 1996},
        {"The Lord of the Rings", "J.R.R. Tolkien", 1954},
        {"Assassin's Creed: The Secret Crusade", "Oliver Bowden", 2011},
        {"Last Descendants", "Matthew J. Kirby", 2016},
        {"The Hunger Games", " Suzanne Collins", 2008},
        {"The Lion, the Witch and the Wardrobe", "C.S. Lewis", 1950},
        {"Shogun", "James Clavell", 1975},
        {"The Dark Tower", "Stephen King", 2004},
    };
}

void Biblioteca::display() const {
    std::cout << "\n========== Carti disponibile ==========\n";
    for (const auto& book : carti) {
        book.display();
    }
}