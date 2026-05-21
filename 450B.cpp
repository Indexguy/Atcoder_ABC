#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> c(n - 1, vector<int>(n));
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cin >> c[i][j];
        }
    }
    string s = "No";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int v = c[i][j];
            for (int l = i + 1; l <= j; l++)
            {
                if (v > c[i][l] && c[l][j] + c[i][l] < v)
                {
                    s = "Yes";
                    break;
                }
            }
        }
    }
    cout << s;
}