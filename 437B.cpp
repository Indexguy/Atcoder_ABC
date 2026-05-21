#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int max = 0;
    int count;
    for (int j = 0; j < h; j++)
    {
        count = 0;
        for (int k = 0; k < w; k++)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[j][k] == b[i])
                {
                    count++;
                }
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << max;
}