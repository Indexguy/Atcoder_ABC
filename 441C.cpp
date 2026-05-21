#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    long long int x;
    cin >> n >> k >> x;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long int sum = 0;
    int count = 0;
    bool flag = false;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
        count++;
        if (sum >= x)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << n - k + count;
    }
    else
    {
        cout << -1;
    }
}