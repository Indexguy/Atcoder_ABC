#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> q1(q), q2(q);
    for (int i = 0; i < q; i++)
    {
        cin >> q1[i] >> q2[i];
    }
    vector<int> ct(q + 1), sum(n + 1);
    int k = 0;
    for (int i = 0; i < q; i++)
    {
        int t1 = q1[i];
        int t2 = q2[i];
        if (t1 == 1)
        {
            sum[t2]++;
            ct[sum[t2]]++;
            if (ct[sum[t2]] == n)
            {
                k = sum[t2];
            }
        }
        else
        {
            if (t2 + k > q)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ct[t2 + k] << endl;
            }
        }
    }
}