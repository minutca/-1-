#include "Duration.h"
bool Duration::isPalindrome1(const string& s)
{
    if (s.empty())
        throw runtime_error("Рядок порожній!");
    string t = s;
    for (char& c : t) c = tolower(c);
    int l = 0, r = t.size() - 1;
    while (l < r)
        if (t[l++] != t[r--]) return false;
    return true;
}
bool Duration::isPalindrome2(const string& s) throw()
{
    if (s.empty()) return false;
    string t = s;
    for (char& c : t) c = tolower(c);
    int l = 0, r = t.size() - 1;
    while (l < r)
        if (t[l++] != t[r--]) return false;
    return true;
}
bool Duration::isPalindrome3(const string& s) throw(invalid_argument)
{
    if (s.empty())
        throw invalid_argument("Порожній рядок!");

    string t = s;
    for (char& c : t) c = tolower(c);

    int l = 0, r = t.size() - 1;
    while (l < r)
        if (t[l++] != t[r--]) return false;

    return true;
}
bool Duration::isPalindrome4(const string& s)
throw(MyEmptyException, MyBadStringException, MyLogicException)
{
    if (s.empty())
        throw MyEmptyException();
    if (s.size() == 1)
        throw MyBadStringException(s);
    if (s.find(' ') != string::npos)
        throw MyLogicException("Рядок містить пробіли!", s);
    string t = s;
    for (char& c : t) c = tolower(c);
    int l = 0, r = t.size() - 1;
    while (l < r)
        if (t[l++] != t[r--]) return false;
    return true;
}
