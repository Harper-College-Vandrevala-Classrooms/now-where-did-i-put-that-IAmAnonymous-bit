#include <iostream>
#include <string>

using namespace std

;int findChar(string s, char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

;int findString(string s, string ss)
{
    for (int i = 0; i < s.length() - ss.length(); i++)
    {
        if(s.substr(i,i+ss.length()) == ss)
        {
            return i;
        }
    }
    return -1;
}