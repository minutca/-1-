#ifndef RATIONAL_H
#define RATIONAL_H
#include "Pair.h"
class Rational : public Pair 
{
public:
    Rational(int x = 0, int y = 1) : Pair(x, y) {}
    Pair add(const Pair& p) const;
    Pair divide(const Pair& p) const;
    Pair subtract(const Pair& p) const override;
};

#endif
