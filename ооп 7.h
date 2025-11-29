#ifndef DURATION_H
#define DURATION_H
#include <string>
#include <stdexcept>
using namespace std;
class MyEmptyException {};
class MyBadStringException 
{
    string value;
public:
    MyBadStringException(const string& v) : value(v)
    {
    }
    string what() const { return "Некоректний рядок: " + value;
    }
};
class MyLogicException : public logic_error
{
    string data;
public:
    MyLogicException(const string& msg, const string& d)
        : logic_error(msg), data(d) 
    {
    }
    string getData() const { return data; 
    }
};
class Duration
{
public:
    bool isPalindrome1(const string& s);
    bool isPalindrome2(const string& s) throw();
    bool isPalindrome3(const string& s) throw(invalid_argument);
    bool isPalindrome4(const string& s)
        throw(MyEmptyException, MyBadStringException, MyLogicException);
};

#endif
