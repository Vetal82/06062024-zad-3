
#include "overcoat.h"
#include <iostream>
using namespace std;

Overcoat::Overcoat() : name(""), type(""), size(0), price(0.0) {}

Overcoat::Overcoat(string n, string t, int s, double p) : name(n), type(t), size(s), price(p) {}

void Overcoat::setName(string n) { name = n; }
void Overcoat::setType(string t) { type = t; }
void Overcoat::setSize(int s) { size = s; }
void Overcoat::setPrice(double p) { price = p; }

string Overcoat::getName() const { return name; }
string Overcoat::getType() const { return type; }
int Overcoat::getSize() const { return size; }
double Overcoat::getPrice() const { return price; }

bool Overcoat::operator==(const Overcoat& other) const { return type == other.type; }
bool Overcoat::operator!=(const Overcoat& other) const { return!(*this == other); }
bool Overcoat::operator>(const Overcoat& other) const { return price > other.price; }
bool Overcoat::operator>=(const Overcoat& other) const { return price >= other.price; }
bool Overcoat::operator<(const Overcoat& other) const { return price < other.price; }
bool Overcoat::operator<=(const Overcoat& other) const { return price <= other.price; }

Overcoat& Overcoat::operator++() { size++; return *this; }
Overcoat Overcoat::operator++(int) { Overcoat temp = *this; size++; return temp; }
Overcoat& Overcoat::operator--() { size--; return *this; }
Overcoat Overcoat::operator--(int) { Overcoat temp = *this; size--; return temp; }

ostream& operator<<(ostream& os, const Overcoat& coat) {
    os << "Найменування: " << coat.name << ", Тип: " << coat.type << ", Розмір: " << coat.size << ", Ціна: " << coat.price << endl;
    return os;
}

istream& operator>>(std::istream& is, Overcoat& coat) {
    is >> coat.name >> coat.type >> coat.size >> coat.price;
    return is;
}
