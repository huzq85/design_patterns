#include "state_pattern.hpp"
#include <iostream>

Context::Context() {}
Context::~Context() {}
Context::Context(State &state) {}
void Context::operation() {}

StateA::StateA() {}
StateA::~StateA() {}
void StateA::handle()
{
    std::cout << "State A print!" << std::endl;
}

StateB::StateB() {}
StateB::~StateB() {}
void StateB::handle()
{
    std::cout << "State B print!" << std::endl;
}
