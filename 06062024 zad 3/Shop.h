#pragma once

#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include "overcoat.h"
using namespace std;

class Shop {
private:
    vector<Overcoat> shop;

public:
    
    void addOvercoat(const Overcoat& coat);

    
    void removeOvercoat(int index);

    
    void editSize(int index, int newSize);

    
    vector<Overcoat>searchByType(string type);

    
    void sortByPrice();

    
    void printShop();
};

#endif // SHOP_H

