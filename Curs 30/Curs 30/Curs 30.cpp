#include <iostream>

using namespace std;
/*
struct Nod {
    int data;       //valoare stocata in nod
    Nod* next;      //pointer catre urmatorul nod
    Nod* prev;      //pointer catre nodul anterior

    //constructor pentru a initializa nodul
    Nod(int val) :data(val), next(nullptr), prev(nullptr) {}
};

class Lista {
private:
    Nod* head;      //capul listei (primul nod)
    Nod* tail;      //coada listei (ultimul nod)

public:
    //constructor pentru a initializa lista
    Lista() :head(nullptr), tail(nullptr) {}

    void adaugare_inceput(int val) {
        Nod* nouNod = new Nod(val);
        if (!head) {
            head = tail = nouNod;       //daca lista este goala, capul si coada devin noul nod
        }
        else {
            nouNod->next = head;
            head->prev = nouNod;
            head = nouNod;      //actualizeaza capul listei
        }
    }

    void adaugare_sfarsit(int val) {
        Nod* nouNod = new Nod(val);
        if (!tail) {
            head = tail = nouNod;       //daca lista este goala, capul si coada devin noul nod
        }
        else {
            tail->next = nouNod;
            nouNod->prev = tail;
            tail = nouNod;      //actualizeaza coada listei
        }
    }

    void stergere(int val) {
        if (!head)return;       //DACA LISTA ESTE GOALA, NU exista nimic de sters

        //cautam nodul cu valoare specificata
        Nod* temp = head;
        while (temp && temp->data != val) {
            temp = temp->next;      //mergi la urmatorul nod
        }

        if (!temp)return;       //daca nu s-a gasit valoarea in lista, iesim

        //Daca nodul pe care vrem sa il stergem este capul
        if (temp == head) {
            head = head->next;
            if (head)head->prev = nullptr;      //actualizeaza next pentru capul listei
        }

        //Daca nodul pe care vrem sa il stergem este coada
        if (temp == tail) {
            tail = tail->next;
            if (tail)tail->next = nullptr;      //actualizeaza next pentru coada listei
        }

        //daca nodul sters este la mijlocul listei
        if (temp->prev) temp->prev->next = temp->next;
        if (temp->next)temp->next->prev = temp->prev;

        delete temp;        //eliberam memoria
    }

    void afisare() {
        Nod* temp = head;
        while (temp) {
            cout << temp->data << endl;     //afisaza valoarea nodului
            temp = temp->next;      //mergi la nodul urmator
        }
    }

    ~Lista() {
        Nod* temp = head;
        while (temp) {
            Nod* next = temp->next;
            delete temp;
            temp = next;
        }
    }

};


int main() {


    Lista lista;

    lista.adaugare_sfarsit(10);
    lista.adaugare_sfarsit(20);
    lista.adaugare_sfarsit(30);
    lista.adaugare_sfarsit(40);
    lista.adaugare_inceput(5);

    lista.afisare();

    lista.stergere(20);

    lista.afisare();

    return 0;
}
*/
//=====================================================================================================

struct Nod {
    int data;       //valoare stocata in nod
    Nod* next;      //pointer catre urmatorul nod

    //constructor pentru a initializa nodul
    Nod(int val):data(val), next(nullptr){}
};

class Lista {
private:
    Nod* head;

public:
    Lista():head(nullptr){}
    
    void adaugare_inceput(int val) {
        Nod* nouNod = new Nod(val);
        nouNod->next = head;        //noul nod indica spre vechiul cap al listei
        head = nouNod;      //noul nod devine capul listei
    }

    void adaugare_sfarsit(int val) {
        Nod* nouNod = new Nod(val);
        if (!head) {
            head = nouNod;      //daca lista este goala, noul nod devine capul listei
        }
        else {
            Nod* temp = head;
            while (temp->next) {
                temp = temp->next;      //mergi la ultimul nod
            }
            temp->next = nouNod;        //adauga noul nod la finalul listei
        }
    }

    void stergere(int val) {
        if (!head) return;      //daca lista este goala, nu exista nimic de sters

        if (head->data == val) {
            Nod* temp = head;
            head = head->next;      //muta capul listei la urmatorul nod
            delete temp;        //eliberam memoria
            return;
        }

        Nod* temp = head;
        while (temp->next && temp->next->data != val) {
            temp = temp->next;      //mergi prin lista pentru a gasi nodul cu valoarea
        }

        //daca am gasit nodul cu valoare de sters
        if (temp->next) {
            Nod* nod_sters = temp->next;
            temp->next = temp->next->next;      //sterge nodul gasit
            delete nod_sters;       //eliberam memoria
        }
    }

    void afisare() {
        Nod* temp = head;
        while (temp) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    };

    //destructor pentru a elibera memoria
    ~Lista() {
        Nod* temp = head;
        while (temp) {
            Nod* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    Lista lista;

    lista.adaugare_sfarsit(10);
    lista.adaugare_sfarsit(20);
    lista.adaugare_sfarsit(50);
    lista.adaugare_inceput(2);

    lista.afisare();

    lista.stergere(20);

    lista.afisare();

    return 0;
}
