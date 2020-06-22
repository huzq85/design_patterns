
#include "singleton.hpp"
#include <iostream>

int main(void)
{
    Singleton *inst = Singleton::getInstance();
    inst->pringAddr();
    Singleton *another = Singleton::getInstance();
    another->pringAddr();
    return 0;
}