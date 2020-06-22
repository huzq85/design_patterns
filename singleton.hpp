#pragma once

class Singleton
{
public:
    static Singleton *getInstance();
    void pringAddr();

private:
    Singleton();
    static Singleton *instance;
};