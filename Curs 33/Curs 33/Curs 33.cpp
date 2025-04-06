#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <ostream>
#include <fstream>
#include <memory>

double calculeaza_litri_per_km(int litri, int km) {
    if (litri == 0) 
        throw 0;
    if (km < 0 || litri < 0)
        throw std::string{ "Valori negative" };
    return static_cast<double>(km) / litri;
}

int main() {
    
    int km;
    int litri;
    double litri_per_km;

    std::cout << "km: ";
    std::cin >> km;
    std::cout << "litri: ";
    std::cin >> litri;

    try {
        litri_per_km = calculeaza_litri_per_km(km, litri);
        std::cout << "Rezultatul: " << litri_per_km << std::endl;
    }
    catch (int& ex) {
        std::cerr << "Nu putem imparti " << std::endl;
    }
    catch (std::string& ex) {
        std::cerr << ex << std::endl;
    }

    std::cout << "BYE " << std::endl;
    
    return 0;
}
