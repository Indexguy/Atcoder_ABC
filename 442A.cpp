#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] == 'i' || s[i] == 'j')
        {
            count++;
        }
    }
    cout << count;
}