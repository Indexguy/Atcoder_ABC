#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    string str = "";
    for (int i = n; i < s.length() - n; i++)
    {
        str += s[i];
    }
    cout << str;
}