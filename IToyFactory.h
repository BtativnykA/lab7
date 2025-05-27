#pragma once
#include "Cat.h"
#include "Bear.h"

// Абстрактна фабрика іграшок
class IToyFactory {
public:
    virtual Cat* GetCat() = 0;
    virtual Bear* GetBear() = 0;
    virtual ~IToyFactory() {}
};