#include <bits/stdc++.h>
using namespace std;
#include <set>

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> f(n);
    set<int> st;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        if (st.find(f[i]) == st.end())
        {
            st.insert(f[i]);
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    flag = true;
    for (int i = 1; i <= m; i++)
    {
        if (st.find(i) == st.end())
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << endl
             << "Yes";
    }
    else
    {
        cout << endl
             << "No";
    }
}