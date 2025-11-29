#include "Rational.h"
Pair Rational::add(const Pair& p) const 
{
    int na = a * p.getB() + b * p.getA();
    int nb = b * p.getB();
    return Pair(na, nb);
}
Pair Rational::divide(const Pair& p) const 
{
    int na = a * p.getA();
    int nb = b * p.getB();
    return Pair(na, nb);
}
Pair Rational::subtract(const Pair& p) const 
{
    int na = a * p.getB() - b * p.getA();
    int nb = b * p.getB();
    return Pair(na, nb);
}
