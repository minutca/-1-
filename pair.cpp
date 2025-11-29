#include "Pair.h"
bool Pair::isEqual(const Pair& p) const 
{
    return (a == p.a && b == p.b);
}
Pair Pair::multiply(const Pair& p) const
{
    return Pair(a * p.a, b * p.b);
}
Pair Pair::subtract(const Pair& p) const 
{
    return Pair(a - b, p.a - p.b);
}
