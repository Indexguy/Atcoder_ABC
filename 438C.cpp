#include <bits/stdc++.h>
using namespace std;
#include <set>

int main()
{

    int n, m;
    cin >> n >> m;
    set<pair<int, int>> st;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        vector<pair<int, int>> array = {
            {r, c}, {r, c + 1}, {r + 1, c}, {r + 1, c + 1}};
        bool flag = true;
        for (pair p : array)
        {
            if (st.count(p))
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (pair p : array)
            {
                st.insert(p);
            }
            count++;
        }
    }
    cout << count;
}