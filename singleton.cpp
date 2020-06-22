#include "singleton.hpp"
#include <iostream>

Singleton *Singleton::instance = nullptr;

Singleton::Singleton() {}

Singleton *Singleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::pringAddr()
{
    if (instance != nullptr)
    {
        std::cout << "The address of Instance is: " << instance << std::endl;
    }
    else
    {
        std::cout << "NO Instances existed!" << std::endl;
    }
}