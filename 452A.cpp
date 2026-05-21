#include <bits/stdc++.h>
using namespace std;
#include <map>

int main()
{
    int m, d;
    cin >> m >> d;
    map<int, int> mp;
    mp[1] = 7;
    mp[3] = 3;
    mp[5] = 5;
    mp[7] = 7;
    mp[9] = 9;
    if (mp[m] == d)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}