#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int findChar(string s, char c)
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

int findChar(string s, char c, int start)
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

    for (int i = start; i < sL.length(); i++)
    {
        if(sL[i] == cL)
        {
            return i;
        }
    }
    return -1;
}

int findString(string s, string ss)
{
    if(ss.length() == 0 || s.length() == 0)
    {
        return -1;
    }

    string sL = "";
    string ssL = "";
    for (int i = 0; i < s.length(); i++)
    {
        sL += tolower(s[i]);
    }

    for (int i = 0; i < ss.length(); i++)
    {
        ssL += tolower(ss[i]);
    }

    for (int i = 0; i <= (sL.length() - ssL.length()); i++)
    {
        string temp = sL.substr(i,ssL.length());
        if(temp == ssL)
        {
            return i;
        }
    }

    return -1;
}

int findString(string s, string ss, int start)
{
    if(ss.length() == 0 || s.length() == 0)
    {
        return -1;
    }

    string sL = "";
    string ssL = "";
    for (int i = 0; i < s.length(); i++)
    {
        sL += tolower(s[i]);
    }

    for (int i = 0; i < ss.length(); i++)
    {
        ssL += tolower(ss[i]);
    }

    for (int i = start; i <= (sL.length() - ssL.length()); i++)
    {
        string temp = sL.substr(i,ssL.length());
        if(temp == ssL)
        {
            return i;
        }
    }

    return -1;
}