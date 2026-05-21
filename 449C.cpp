#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    int n, l, r;
    string s;
    cin >> n >> l >> r >> s;
    map<char, int> mp;
    for (int i = l; i <= r; i++)
    {
        mp[s[i]] = mp[s[i]] + 1;
    }
    int j_r = r + 1;
    int j_l = l;
    long long sum = 0;
    for (int i = 0; i < n - l; i++)
    {
        // cout << "c=" << s[i] << " ";
        sum = sum + mp[s[i]];
        if (mp[s[j_l]] > 0)
        {
            mp[s[j_l]] = mp[s[j_l]] - 1;
        }
        // cout << "j_l=" << j_l << " ";
        j_l++;
        if (j_r < n)
        {
            // cout << "j_r=" << j_r << " ";
            mp[s[j_r]] = mp[s[j_r]] + 1;
            j_r++;
        }
        // cout << sum << endl;
    }
    cout << sum;
}