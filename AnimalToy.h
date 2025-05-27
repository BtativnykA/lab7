#pragma once
#include <string>

// Базовий клас для іграшок
class AnimalToy {
protected:
    std::string name; // Ім'я іграшки
public:
    int ID; // Унікальний ідентифікатор
    static int totalNumber; // Загальна кількість створених іграшок

    AnimalToy(std::string name); // Конструктор з параметром
    AnimalToy();                 // Конструктор за замовчуванням

    std::string getName();       // Отримати ім'я
    void setName(std::string name); // Встановити ім'я
};