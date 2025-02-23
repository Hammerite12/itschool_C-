#pragma once
#include <iostream>
#include <string>

class Carte {
private:
    std::string titlu;
    std::string autor;
    int an;

public:
    Carte(const std::string titlu, std::string autor, int an);

    std::string get_titlu() const;
    std::string get_autor() const;
    int get_an() const;

    void display() const;
};