#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n];
    int k[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        k[i] = i + 1;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (t[j] < t[j - 1])
            {
                int r = t[j - 1];
                t[j - 1] = t[j];
                t[j] = r;
                r = k[j - 1];
                k[j - 1] = k[j];
                k[j] = r;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << k[i] << " ";
    }
}