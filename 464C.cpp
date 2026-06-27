#include <bits/stdc++.h>
using namespace std;
#include <map>

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a_(n);
    vector<int> d_(n);
    vector<int> b_(n);
    vector<pair<int, pair<int, int>>> parray(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a_[i] >> d_[i] >> b_[i];
        parray[i] = {d_[i], {a_[i], b_[i]}};
        mp[a_[i]] += 1;
    }
    sort(parray.begin(), parray.end());
    int d_pre = 1;
    int d_pre_pre = 1;
    int l = 0;
    int pre_mp = mp.size();
    while (l < n)
    {
        int d = parray[l].first;
        int a = parray[l].second.first;
        int b = parray[l].second.second;
        if (d_pre == d)
        {
            d = parray[l].first;
            a = parray[l].second.first;
            b = parray[l].second.second;
            mp[a]--;
            mp[b]++;
            if (mp[a] == 0)
            {
                mp.erase(a);
            }
            l++;
            d_pre = d;
        }
        else
        {
            for (int i = d_pre_pre; i < d_pre; i++)
            {
                cout << pre_mp << endl;
            };
            d_pre_pre = d_pre;
            d_pre = d;
            pre_mp = mp.size();
        }
    }
    for (int i = d_pre_pre; i < d_pre; i++)
    {
        cout << pre_mp << endl;
    }
    for (int i = d_pre; i <= m; i++)
    {
        cout << mp.size() << endl;
    }
    // かなり強引かもしれないです...
}