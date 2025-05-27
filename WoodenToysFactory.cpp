#include "WoodenToysFactory.h"

// Дерев'яний кіт
class WoodenCat : public Cat {
public:
    WoodenCat() : Cat("Wooden Cat") {}
};

// Дерев'яний ведмідь
class WoodenBear : public Bear {
public:
    WoodenBear() : Bear("Wooden Bear") {}
};

Cat* WoodenToysFactory::GetCat() {
    return new WoodenCat();
}

Bear* WoodenToysFactory::GetBear() {
    return new WoodenBear();
}