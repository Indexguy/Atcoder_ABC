#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, x, y;
    cin >> p >> q;
    cin >> x >> y;
    bool flag = false;
    if (p <= x && p + 100 > x)
    {
        if (q <= y && q + 100 > y)
        {
            flag = true;
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