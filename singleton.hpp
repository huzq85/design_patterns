#pragma once

class Singleton
{
public:
    static Singleton *getInstance();
    static void releaseInstance();
    void pringAddr();

private:
    Singleton();
    virtual ~Singleton();
    static void addRef();
    static void decRef();
    static Singleton *instance;
    static int userCount;
};