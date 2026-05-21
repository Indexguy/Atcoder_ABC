#include <bits/stdc++.h>
using namespace std;
#include <map>
#include <set>

int main()
{
    int n;
    int m;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    cin >> m;
    vector<string> s(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> s[i];
    }

    vector<vector<set<char>>> array(1000, vector<set<char>>(1000));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int size = (int)s[j].size();
            if (size == a[i])
            {
                array[a[i]][b[i]].insert(s[j][b[i] - 1]);
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        int size = (int)s[i].size();
        bool flag = true;
        if (size == n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (array[a[j]][b[j]].find(s[i][j - 1]) == array[a[j]][b[j]].end())
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
}