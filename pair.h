#ifndef PAIR_H
#define PAIR_H
#include <iostream>
using namespace std;
class Pair 
{
protected:
    int a, b;
public:
    Pair(int x = 0, int y = 0) : a(x), b(y) {}
    int getA() const { return a; 
    }
    int getB() const { return b; 
    }
    bool isEqual(const Pair& p) const;
    Pair multiply(const Pair& p) const;
    virtual Pair subtract(const Pair& p) const;
    virtual ~Pair() {}
};

#endif
