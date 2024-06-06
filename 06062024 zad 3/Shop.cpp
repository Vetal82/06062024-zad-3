
#include "shop.h"
#include <algorithm>
#include <iostream>

void Shop::addOvercoat(const Overcoat& coat) { shop.push_back(coat); }

void Shop::removeOvercoat(int index) { shop.erase(shop.begin() + index); }

void Shop::editSize(int index, int newSize) { shop[index].setSize(newSize); }

vector<Overcoat> Shop::searchByType(std::string type) {
    vector<Overcoat> result;
    for (const auto& coat : shop) {
        if (coat.getType() == type) {
            result.push_back(coat);
        }
    }
    return result;
}

void Shop::sortByPrice() {
    sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat& b) { return a.getPrice() < b.getPrice(); });
}

void Shop::printShop() {
    for (const auto& coat : shop) {
        cout << coat;
    }
}
