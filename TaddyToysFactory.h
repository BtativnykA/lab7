#pragma once
#include "IToyFactory.h"

// Конкретна фабрика — м’які іграшки
class TaddyToysFactory : public IToyFactory {
public:
    Cat* GetCat() override;
    Bear* GetBear() override;
};