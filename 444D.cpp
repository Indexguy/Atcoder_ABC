#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int N = 2 * 10 * 10 * 10 * 10 * 10 * 10 * 10;
    vector<long long> r(N);
    vector<long long> sum(n + 1);
    sort(a.begin(),a.end());
    int s = a[n];
    for (int i = 1; i <= n; i++)
    {
        r[i] = 0;
        sum[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        r[a[i]]++;
    }
    sum[n] = r[n];
    for (int i = n - 1; i >= 1; i--)
    {
        sum[i] = sum[i + 1] + r[i];
        r[i] += sum[i + 1];
    }
    for (int i = 1; i <= a[n]; i++)
    {
        int q = 0;
        int c = 0;
        while (r[i] != 0)
        {
            q = r[i] % 10;
            if (q != 0)
            {
                r[i + c]++;
            }
            c++;
            r[i] = r[i] / 10;
        }
        r[i] = q;
        cout << r[i];
    }
    cout << endl;
    bool flag = true;
    for (int i = N; i > 0; i--)
    {
        if (flag)
        {
            if (r[i] != 0)
            {
                cout << r[i];
                flag = false;
            }
        }else{
            cout << r[i];
        }
    }
}
