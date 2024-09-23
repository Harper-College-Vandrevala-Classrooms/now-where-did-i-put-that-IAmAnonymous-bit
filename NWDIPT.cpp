#include <iostream>
#include <string>
#include <cctype>

using namespace std

;int findChar(string s, char c)
{
    if(s.length() == 0)
    {
        return -1;
    }

    string sL = "";
    for (int i = 0; i < s.length(); i++)
    {
        sL += tolower(s[i]);
    }

    char cL = tolower(c);

    for (int i = 0; i < s.length(); i++)
    {
        if(sL[i] == cL)
        {
            return i;
        }
    }
    return -1;
}

;int findString(string s, string ss)
{
    if(ss.length() == 0 || s.length() == 0)
    {
        return -1;
    }

    for (int i = 0; i <= (s.length() - ss.length()); i++)
    {
        string temp = s.substr(i,ss.length());
        if(temp == ss)
        {
            return i;
        }
    }

    return -1;
}