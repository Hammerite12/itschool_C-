#include <iostream>
#include <ostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <memory>
#include<iomanip> ///setw , setfill, stanga, dreapta

using namespace std;

int main() {

    //partea de scriere in fisier
        /*ofstream outFile("output.txt");    //creaza si deschide fisierul
        if (outFile.is_open()) {
            outFile << "Hello from ITSchool\n";
            outFile << "sa scriu in fisier este simplu.\n";
            outFile.close();               //intotdeauna inchide fisierul la final
        }
        else {
            cout << "eroare nu deschide fisierul\n";
        }

        */
        //partea de citire din fisier


    ifstream inFile("output.txt");    //deschide fisierul petru citire
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {       //citeste linie cu linie
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "Eroare deschidere fisier.\n";
    }
    
    ofstream outFile("format.txt");

    if (outFile.is_open()) {
        outFile << left << setw(15) << setfill('_') << "Name" << right << setw(10) << setfill('_') << "Score" << endl;
        outFile << left << setw(15) << setfill(' ') << "Alin" << right << setw(10) << 25 << endl;
        outFile << left << setw(15) << "Boby" << right << setw(10) << 100 << endl;
        outFile << left << setw(15) << "Alina" << right << setw(10) << 100 << endl;

        outFile.close();
        cout << "Datele scrise cu iomanip in format.txt\n";
    }
    else {
        cout << "Nu am putut deschide fisiserul\n";
    }


    return 0;
}

