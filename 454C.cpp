#include <bits/stdc++.h>
using namespace std;
#include <set>

int n, m;

int main()
{

    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    vector<pair<int, int>> array(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
        array[i] = make_pair(a[i], b[i]);
    }
    sort(array.begin(), array.end());
    set<int> st;
    st.insert(1);
    int count = 1;
    for (pair<int,int> p : array)
    {
        int i = p.first;
        int j = p.second;
        if (st.find(i) != st.end())
        {
            if (st.find(j) == st.end())
            {
                st.insert(j);
                count++;
            }
        }
    }
    cout << count;
}