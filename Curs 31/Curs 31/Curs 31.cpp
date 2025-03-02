#include <iostream>

using namespace std;

//Definirea structurii unui nod al listei
struct Node {
    int data;       //valoarea nodului
    Node* next;     //pointer catre urmatorul nod

    //constructor pentru a initializa un nod
    Node(int val) :data(val), next(nullptr) {}
};

//Clasa pentru lista simplu inlantuita
class LinkedList {
public:
    Node* head;     //capul listei

    //Constructorul
    LinkedList() :head(nullptr){}

    //adaugarea unui nod la sfarsitul listei
    void apend(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head == newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    //metoda pentru a copia lista curenta intr-o alta lista
    LinkedList copy() {
        LinkedList NewList;
        Node* temp = head;
        while (temp != nullptr) {
            NewList.apend(temp->data);      //adauga datele din nodul curent in noua lista
            temp = temp->next;
        }
        return NewList;
    }

    //metoda pentru a copia datele intr-un array
    int* toArray(int& size) {
        //calculam dimensiunea listei
        Node* temp = head;
        size = 0;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        //alocam un array de dimensiunea calculata
        int* arr = new int[size];

        //populam array-ul cu datele din lista
        for (int i = 0; temp != nullptr; i++) {
            arr[i] = temp->data;
            temp = temp->next;
        }

        return arr;     //returneaza array-ul
    }

    //afisam lista
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }

    //destructoru; pentru a elibera memoria
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main() {
    
    LinkedList lista;

    lista.apend(10);
    lista.apend(20);
    lista.apend(30);
    lista.apend(40);

    cout << "lista original" << endl;
    lista.print();

    LinkedList lista2 = lista.copy();

    lista2.print();

    //copiem lista intr-un array

    int size = 0;

    int* arr = lista.toArray(size);

    //afisam array-ul

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //eliberam memoria
    delete[] arr;

    return 0;
}