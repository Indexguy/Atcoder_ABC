#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    vector<int> l(n);
    for (int i = 0; i < n; i++)
        cin >> h[i] >> l[i];
    int q;
    cin >> q;
    vector<int> t(q);
    for (int i = 0; i < q; i++)
        cin >> t[i];
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push({h[i], l[i]});
    }
    vector<pair<int, int>> pt(q);
    for (int i = 0; i < q; i++)
    {
        pt[i] = {t[i], i};
    }
    sort(pt.begin(), pt.end());
    vector<int> result(q);
    for (int i = 0; i < q; i++)
    {
        bool flag = true;
        while (flag)
        {
            pair<int, int> p = pq.top();
            if (p.second > pt[i].first)
            {
                result[pt[i].second] = p.first;
                flag = false;
            }
            else
            {
                pq.pop();
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}