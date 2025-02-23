#pragma once
#include "carte.h"
#include <vector>

class Biblioteca {
private:
    std::vector<Carte> carti;

public:
    Biblioteca();

    void display() const;
};