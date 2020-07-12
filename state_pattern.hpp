#pragma once

class State
{
public:
    virtual void handle() = 0;
};

class Context
{
public:
    Context();
    Context(State &state);
    ~Context();

    void operation();
};

class StateA : public State
{
public:
    StateA();
    ~StateA();
    void handle() override;
};

class StateB : public State
{
public:
    StateB();
    ~StateB();
    void handle() override;
};