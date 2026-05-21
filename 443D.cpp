#include <bits/stdc++.h>
using namespace std;
#include <map>

int main()
{
    int t;
    cin >> t;
    int n;
    vector<long long> result(t);
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        vector<int> r(n + 1);
        vector<int> s(n + 1);
        map<int, int> mp;
        r[0] = 0;
        s[0] = INT_MAX;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> r[i];
            s[i] = r[i];
            mp[r[i]] = i;
        }
        sort(s.begin(), s.end());
        int n_1 = mp[s[0]] - 1;
        int n_2 = mp[s[0]] + 1;
        int u_1 = s[0] + 1;
        int u_2 = s[0] + 1;
        long long count = 0;
        while (n_1 != 0 && n_2 != n + 1)
        {
            if (r[n_1] > u_1)
            {
                count += r[n_1] - u_1;
                r[n_1] = u_1;
                u_1++;
            }
            if (r[n_2] > u_2)
            {
                count += r[n_2] - u_2;
                r[n_2] = u_2;
                u_2++;
            }
            if (n_1 != 0)
            {
                n_1--;
            }
            if (n_2 != n + 1)
            {
                n_2++;
            }
        }
        result[k] = count;
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
}