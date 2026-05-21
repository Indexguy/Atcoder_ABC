#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1);
    vector<int> b(m + 1);
    vector<int> amount(n+1);
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        amount[i] = n - 1;
    }
    for (int i = 1; i <= m; i++)
    {
        amount[a[i]] = amount[a[i]] - 1;
        amount[b[i]] = amount[b[i]] - 1;
    }
    for (int i = 1; i <= n; i++)
    {
        int count = amount[i];
        long long int u = 1;
        if (count >= 3)
        {
            for (int j = 0; j < 3; j++)
            {
                u = u * count;
                count--;
            }
            u = u / 6;
        }
        else
        {
            u = 0;
        }
        cout << u << " ";
    }
}