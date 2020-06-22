#include "singleton.hpp"
#include <iostream>

Singleton *Singleton::instance = nullptr;
int Singleton::userCount = 0;

Singleton::Singleton() {}
Singleton::~Singleton() {}

void Singleton::releaseInstance() 
{
    decRef();
    if (userCount == 0 && instance != nullptr) {
        delete instance;
        instance = nullptr;
        std::cout << "DEBUG: instance has been deleted!" << std::endl;
    }
}

void Singleton::addRef()
{
    userCount++;
    std::cout << "DEBUG: userCount in addRef: " << userCount << std::endl;
}

void Singleton::decRef()
{
    userCount--;
    std::cout << "DEBUG: userCount in decRef: " << userCount << std::endl;
}

Singleton *Singleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new Singleton();
    }
    addRef();
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