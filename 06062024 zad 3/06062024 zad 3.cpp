// 06062024 zad 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "shop.h"
#include <iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "Ukr");

    Shop shop;

    Overcoat coat1("Пальто", "чоловічий", 48, 500.0);
    Overcoat coat2("Куртка", "жіночий", 42, 300.0);
    Overcoat coat3("Плащ", "дитячий", 36, 200.0);

    shop.addOvercoat(coat1);
    shop.addOvercoat(coat2);
    shop.addOvercoat(coat3);

    shop.printShop();

    cout << "Пошук елементів за типом 'жіночий':" << endl;
    vector<Overcoat> result = shop.searchByType("жіночий");
    for (const auto& coat : result) {
        cout << coat;
    }

    shop.editSize(1, 44);
    cout << "Після редагування розміру:" << endl;
    shop.printShop();

    shop.sortByPrice();
    cout << "Після сортування за ціною:" << endl;
    shop.printShop();

    return 0;
}