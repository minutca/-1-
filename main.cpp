#include <iostream>
#include "Pair.h"
#include "Rational.h"
using namespace std;
int main() {
    Pair p1(4, 2);
    Pair p2(6, 3);
    Rational r1(4, 2);
    Rational r2(6, 3);
    cout << "Pair";
    Pair pm = p1.multiply(p2);
    cout << "Multiply: (" << pm.getA() << ", " << pm.getB() << ")\n";
    Pair ps = p1.subtract(p2);
    cout << "Subtract: (" << ps.getA() << ", " << ps.getB() << ")\n";
    cout << "Rational";
    Pair ra = r1.add(r2);
    cout << "Add: (" << ra.getA() << ", " << ra.getB() << ")\n";
    Pair rd = r1.divide(r2);
    cout << "Divide: (" << rd.getA() << ", " << rd.getB() << ")\n";
    Pair rs = r1.subtract(r2);
    cout << "Subtract: (" << rs.getA() << ", " << rs.getB() << ")\n";
    return 0;
}
