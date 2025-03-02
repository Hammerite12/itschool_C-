#pragma once
#include <iostream>
#include <string>

struct Product {
	std::string name;
	double price;
	int quantity;
	Product* next;

	Product(std::string n, double p, int q) : name(n), price(p), quantity(q), next(nullptr) {}
};

class ProductList {
private:
	Product* head;
public:
	ProductList();

	void addProduct(std::string n, double p, int q) {}
	void displayProducts()const {}
	ProductList copyList() {}
	void deleteProduct(std::string name) {}
};