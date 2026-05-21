#include <bits/stdc++.h>
using namespace std;
#include <map>

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> c(q + 1);
    vector<int> p(q + 1);
    for (int i = 1; i <= q; i++)
    {
        cin >> c[i] >> p[i];
    }
    vector<int> up(n + 1);
    vector<int> on(n + 1);
    vector<int> down(n + 1);
    for (int i = 1; i <= n; i++)
    {
        up[i] = 0;
        on[i] = i;
        down[i] = -i;
    }

    for (int i = 1; i <= q; i++)
    {
        up[p[i]] = c[i];
        if (down[c[i]] < 0)
        {
            on[abs(down[c[i]])] = 0;
        }
        else
        {
            up[down[c[i]]] = 0;
        }
        down[c[i]] = p[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int o = on[i];

        if (o > 0 && down[o] < 0)
        {
            while (o != 0)
            {
                count++;
                o = up[o];
            }
        }
        cout << count << " ";
    }
}