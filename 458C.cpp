#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'C')
        {
            if (i < n / 2)
            {
                count += (i + 1);
            }
            else
            {
                count += (n - i);
            }
        }
    }
    cout << count;
}