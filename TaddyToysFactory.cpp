#include "TaddyToysFactory.h"

// М’який кіт
class TaddyCat : public Cat {
public:
    TaddyCat() : Cat("Taddy Cat") {}
};

// М’який ведмідь
class TaddyBear : public Bear {
public:
    TaddyBear() : Bear("Taddy Bear") {}
};

Cat* TaddyToysFactory::GetCat() {
    return new TaddyCat();
}

Bear* TaddyToysFactory::GetBear() {
    return new TaddyBear();
}