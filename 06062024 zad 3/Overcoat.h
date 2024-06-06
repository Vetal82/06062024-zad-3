#pragma once

#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <string>
using namespace std;

class Overcoat {
private:
    string name;
    string type; 
    int size;
    double price;

public:
    
    Overcoat();

    
    Overcoat(string n, string t, int s, double p);

    
    void setName(string n);
    void setType(string t);
    void setSize(int s);
    void setPrice(double p);

    
    string getName() const;
    string getType() const;
    int getSize() const;
    double getPrice() const;

    
    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator>=(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    bool operator<=(const Overcoat& other) const;

    
    Overcoat& operator++();
    Overcoat operator++(int);
    Overcoat& operator--();
    Overcoat operator--(int);

    
    friend ostream& operator<<(ostream& os, const Overcoat& coat);
    friend istream& operator>>(istream& is, Overcoat& coat);
};

#endif // OVERCOAT_H

