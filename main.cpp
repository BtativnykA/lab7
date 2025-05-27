#include <iostream>
// #include "WoodenToysFactory.h"
#include "TaddyToysFactory.h"

int main() {
    IToyFactory* toyFactory = new TaddyToysFactory(); // Створюємо фабрику дерев'яних іграшок

    Cat* cat = toyFactory->GetCat();   // Створюємо кота
    Bear* bear = toyFactory->GetBear(); // Створюємо ведмедя

    std::cout << "I've got " << cat->getName() << " (ID: " << cat->ID << ") and "
              << bear->getName() << " (ID: " << bear->ID << ")" << std::endl;

    delete cat;
    delete bear;
    delete toyFactory;

    return 0;
}