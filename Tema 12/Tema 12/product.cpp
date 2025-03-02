#include <iostream>
#include "product.h"

ProductList::ProductList() : head(nullptr) {}

void ProductList::addProduct(std::string n, double p, int q) {
    Product* newProduct = new Product(n, p, q);       //cream un nou nod
    if (head == nullptr) {
        head = newProduct;      //daca lista este goala, noul nod devine head
    }
    else {
        Product* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;      //mergem la ultimul element
        }
        temp->next = newProduct;        //legam noul nod de ultimul
    }
}

void ProductList::displayProducts()const {
    Product* temp = head;
    while (temp != nullptr) {
        std::cout << temp->name << "; " << temp->price << "; " << temp->quantity << std::endl;
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;          //sfarsitul listei
}

ProductList copyList() {
    ProductList NewList;
    Product* temp = head;
    while (temp != nullptr) {
        NewList.addProduct(temp->name, temp->price, temp->quantity);      //adauga datele din nodul curent in noua lista
        temp = temp->next;
    }
    return NewList;
}
