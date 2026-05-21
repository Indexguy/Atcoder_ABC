#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    char c_s;
    long long cs = 0;
    long long ct = 0;
    int cp = 0;
    int tp = 0;
    long long r = 0;
    while (cp != s.size() || tp != t.size())
    {
        char c;
        if (cp != s.size())
        {
            c = s[cp];
            while (c == 'A')
            {
                cs++;
                cp++;
                c = s[cp];
            }
            c_s = c;
        }
        c = t[tp];
        if (tp != t.size())
        {
            while (c == 'A')
            {
                ct++;
                tp++;
                c = t[tp];
            }
        }
        // cout << "cp=" << cp << " tp=" << tp << endl;
        if (c != c_s && !(cp == s.size() && tp == t.size()))
        {
            cout << -1;
            break;
        }
        else
        {
            r = r + abs(cs - ct);
            c = s[cp];
            cs = 0;
            ct = 0;
            if (cp != s.size())
            {
                cp++;
            }
            if (tp != t.size())
            {
                tp++;
            }
        }
    }
    if (cp == s.size() && tp == t.size())
    {
        cout << r;
    }
}