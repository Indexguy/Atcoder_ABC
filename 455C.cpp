#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    long long int sum = 0;
    vector<long long int> array(n);
    int p = 0;
    long long int _sum_ = 0;
    int pre = a[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (pre == a[i])
        {
            _sum_ = _sum_ + a[i];
        }
        else
        {
            array[p] = _sum_;
            p++;
            _sum_ = a[i];
            pre = a[i];
        }
    }
    array[p] = _sum_;
    sort(array.rbegin(), array.rend());
    long long int k_sum = 0;
    for (int i = 0; i < k; i++)
    {
        k_sum = k_sum + array[i];
    }
    cout << sum - k_sum;
}