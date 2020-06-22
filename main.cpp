
#include "singleton.hpp"
#include <iostream>

int main(void)
{
    Singleton *inst = Singleton::getInstance();
    inst->pringAddr();
    Singleton *another = Singleton::getInstance();
    another->pringAddr();
    inst->releaseInstance();
    another->releaseInstance();
    return 0;
}