#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> c[i][j];
        }
    }
    int u, d, l, r;
    u = -1;
    d = h;
    l = -1;
    r = w;
    bool flag = true;
    while (u < h && flag)
    {
        u++;
        int j = 0;
        while (j < w)
        {
            if (c[u][j] != '.')
            {
                flag = false;
                break;
            }
            else
            {
                j++;
            }
        }
    }

    flag = true;
    while (d >= 0 && flag)
    {
        d--;
        int j = 0;
        while (j < w)
        {
            if (c[d][j] != '.')
            {
                flag = false;
                break;
            }
            else
            {
                j++;
            }
        }
    }

    flag = true;
    while (l < w && flag)
    {
        l++;
        int j = u;
        while (j <= d)
        {
            if (c[j][l] != '.')
            {
                flag = false;
                break;
            }
            else
            {
                j++;
            }
        }
    }
    flag = true;
    while (r >= 0 && flag)
    {
        r--;
        int j = u;
        while (j <= d)
        {
            if (c[j][r] != '.')
            {
                flag = false;
                break;
            }
            else
            {
                j++;
            }
        }
    }
    for (int i = u; i <= d; i++)
    {
        for (int j = l; j <= r; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
}