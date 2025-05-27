#pragma once
#include "AnimalToy.h"

// Клас Кіт — наслідується від AnimalToy
class Cat : public AnimalToy {
public:
    Cat(std::string name);
    Cat();
};