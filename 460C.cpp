#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int j = 0;
    int count = 0;
    for (int i = 0; i < m && j != n; i++)
    {
        if (a[j] * 2 >= b[i])
        {
            count++;
            j++;
        }
    }
    cout << count;
}