#include <iostream>

using namespace std;

//exemplu lista simplu inlantuita:
//putem sa parcurgem intr-o singura directie
/*
struct Node {
    int date;       //datele stocate in nod
    Node* next;     //pointer catre urmatorul nod

    Node(int val) : date(val), next(nullptr) {}
};

//clasa care reprezinta lista
class lista_inlantuita {
private:
    Node* head;     //primul nod din lista

public:
    lista_inlantuita() : head(nullptr) {}

    //adaugam un nod la sfarsitul listei
    void adaugare(int value) {
        Node* newNode = new Node(value);    //cream un nou nod
        if (head == nullptr) {
            head = newNode;                 //daca lista este goala, noul nod devine head
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;          //mergem la ultimul element
            }
            temp->next = newNode;           //legam noul nod de ultimul
        }
    }

    //afisare lista
    void print()const {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->date << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;          //sfarsitul listei
    }

    //destructor pentru a elibera memoria
    ~lista_inlantuita() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    lista_inlantuita lista;

    lista.adaugare(10);
    lista.adaugare(20);
    lista.adaugare(30);

    lista.print();

    return 0;
}
*/
//===================================================================================================================

struct Node {
    int date;       //datele stocate in nod
    Node* next;     //pointer catre urmatorul nod
    Node* prev;     //pointer catre nodul anterior

    Node(int val) : date(val), next(nullptr), prev(nullptr) {}
};

//clasa care reprezinta lista
class lista_dublu_inlantuita {
private:
    Node* head;     //primul nod din lista
    Node* tail;     //pointer catre nodul anterior

public:
    lista_dublu_inlantuita() : head(nullptr), tail(nullptr) {}

    //adaugam un nod la sfarsitul listei
    void adaugaresf(int value) {
        Node* newNode = new Node(value);    //cream un nou nod
        if (head == nullptr) {
            head = tail = newNode;          //daca lista este goala, head si tail sunt aceelasi nod
        }
        else {
            tail->next = newNode;           //legam nodul existent de noul nod
            newNode->prev = tail;           //setam pointerul prev al noului nod
            tail = newNode;                 //actualizam coada
        }
    }

    //afisare lista de la inceput la sfarsit
    void print_crescator()const {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->date << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;          //sfarsitul listei
    }

    //afisare lista de la sfarsit la inceput
    void print_descrescator()const {
        Node* temp = tail;
        while (temp != nullptr) {
            cout << temp->date << "->";
            temp = temp->prev;
        }
        cout << "nullptr" << endl;          //sfarsitul listei
    }

    //destructor pentru a elibera memoria
    ~lista_dublu_inlantuita() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    
    lista_dublu_inlantuita lista;

    lista.adaugaresf(10);
    lista.adaugaresf(20);
    lista.adaugaresf(30);

    cout << "lista dublu inlantuita (de la inceput la sfarsit):";
    lista.print_crescator();

    cout << "lista dublu inlantuita (de la sfarsit la inceput):";
    lista.print_descrescator();

    return 0;
}