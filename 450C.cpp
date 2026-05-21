#include <bits/stdc++.h>
using namespace std;

int labeling(int h, int w, int t, int d, vector<vector<char>>& s)
{
    int r = 0;
    bool f = false;
    s[t][d] = '#';
    if (t - 1 >= 0 && s[t - 1][d] == '.')
    {
        r = labeling(h, w, t - 1, d, s);
        if (r == -1)
        {
            f = true;
        }
    }
    if (d - 1 >= 0 && s[t][d - 1] == '.')
    {
        r = labeling(h, w, t, d - 1, s);
        if (r == -1)
        {
            f = true;
        }
    }
    if (t + 1 < h && s[t + 1][d] == '.')
    {
        r = labeling(h, w, t + 1, d, s);
        if (r == -1)
        {
            f = true;
        }
    }
    if (d + 1 < w && s[t][d + 1] == '.')
    {
        r = labeling(h, w, t, d + 1, s);
        if (r == -1)
        {
            f = true;
        }
    }
    if ((t - 1 < 0 || t + 1 >= h || d - 1 < 0 || d + 1 >= w) || f)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '.')
            {
                int v = labeling(h, w, i, j, s);
                if (v != -1)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}