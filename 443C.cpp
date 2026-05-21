#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int sum;
    long long int t_n;
    if (n > 0)
    {
        sum = a[0];
        t_n = a[0] + 100;
        for (int i = 1; i < n; i++)
        {
            if (t_n < a[i])
            {
                sum += a[i] - t_n;
                t_n = a[i] + 100;
            }
        }
        if (t_n < t)
        {
            sum = sum + (t - t_n);
        }
    }
    else
    {
        sum = t;
    }
    cout << sum;
}