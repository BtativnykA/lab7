#include "AnimalToy.h"

// Ініціалізація статичної змінної
int AnimalToy::totalNumber = 0;

AnimalToy::AnimalToy(std::string name) {
    this->name = name;
    ID = totalNumber++;
}

AnimalToy::AnimalToy() {}

std::string AnimalToy::getName() {
    return name;
}

void AnimalToy::setName(std::string name) {
    this->name = name;
}