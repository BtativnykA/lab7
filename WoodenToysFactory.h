#pragma once
#include "IToyFactory.h"

// Конкретна фабрика — дерев'яні іграшки
class WoodenToysFactory : public IToyFactory {
public:
    Cat* GetCat() override;
    Bear* GetBear() override;
};