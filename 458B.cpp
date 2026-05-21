#include <bits/stdc++.h>
using namespace std;

int h, w;

int near(int i, int j)
{
    int count = 0;
    if (i != 0)
    {
        count++;
    }
    if (j != 0)
    {
        count++;
    }
    if (i != h - 1)
    {
        count++;
    }
    if (j != w - 1)
    {
        count++;
    }
    return count;
}

int main()
{
    cin >> h >> w;
    vector<vector<int>> array(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << near(i, j) << " ";
        }
        cout << endl;
    }
}