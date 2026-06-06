#include <bits/stdc++.h>
using namespace std;
#include <map>
#include <set>

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> c(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> c[i] >> v[i];
    vector<pair<int, int>> array(n);
    map<int, int> mp_max;
    for (int i = 0; i < n; i++)
    {
        if (mp_max[c[i]] < v[i])
        {
            mp_max[c[i]] = v[i];
        }
        pair<int, int> p = {v[i], c[i]};
        array[i] = p;
    }
    long long int count = 0;
    set<pair<int, int>> st;
    vector<pair<int, int>> array2(mp_max.size());
    for (auto i : mp_max)
    {
        pair<int, int> p = {i.second, i.first};
        array2.push_back(p);
    }
    sort(array.rbegin(), array.rend());
    sort(array2.rbegin(), array2.rend());
    for (int i = 0; i < m; i++)
    {
        pair<int, int> p = array2[i];
        count += array2[i].first;
        st.insert(p);
    }
    int cnt = m;
    int i = 0;
    while (cnt < k && i < n)
    {
        pair<int, int> p = array[i];
        i++;
        if (st.find(p) == st.end())
        {
            count += p.first;
            cnt++;
        }else{
            st.erase(p);
        }
    }
    cout << count;
}