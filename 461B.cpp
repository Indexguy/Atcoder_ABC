#include <bits/stdc++.h>
using namespace std;
#include <map>

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mp[i + 1] = b[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] != i + 1)
        {
            flag = false;
            break;
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
}