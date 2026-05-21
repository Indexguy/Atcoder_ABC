#include <bits/stdc++.h>
using namespace std;

void go(int i)
{
}

int main()
{
    int n, m, l, s, t;
    cin >> n >> m >> l >> s >> t;
    vector<int> u(m);
    vector<int> v(m);
    vector<int> c(m);
    vector<vector<int>> g(m, vector<int>(m));
    for (int i = 0; i < m; i++)
    {
        cin >> u[i] >> v[i] >> c[i];
        g[u[i]][v[i]] = c[i];
    }
    
}