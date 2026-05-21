#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 2);
    vector<int> sum_array(n + 2);
    vector<int> result(q + 2);
    int r_pointer = 0;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sum_array[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sum_array[i] = sum_array[i - 1] + a[i];
    }
    for (int i = 1; i <= q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            sum_array[x] = sum_array[x] - a[x] + a[x + 1];
            int kari = a[x];
            a[x] = a[x + 1];
            a[x + 1] = kari;
        }
        else if (t == 2)
        {
            int l, r;
            cin >> l >> r;
            result[r_pointer] = sum_array[r] - sum_array[l - 1];
            r_pointer++;
        }
    }
    for (int i = 0; i < r_pointer; i++)
    {
        cout << result[i] << endl;
    }
}