#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            cout << s[i];
        }
        else if (s[i] != 'o' && !flag)
        {
            flag = true;
            cout << s[i];
        }
    }
}