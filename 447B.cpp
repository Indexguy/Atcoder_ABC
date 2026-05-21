#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    map<char, int> mp;
    string s;
    cin >> s;
    int max = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        int count = mp[c];
        if (count == 0)
        {
            mp[c] = 1;
            count = 1;
        }
        else
        {
            mp[c] = mp[c] + 1;
            count++;
        }
        if (count > max)
        {
            max = count;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] != max)
        {
            cout << s[i];
        }
    }
}