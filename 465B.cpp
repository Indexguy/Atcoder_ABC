#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, l, r, a, b;
    cin >> x >> y >> l >> r >> a >> b;
    int count = 0;
    for (int i = a; i < b; i++)
    {
        if (i < l || i >= r)
        {
            count += y;
        }
        else
        {
            count += x;
        }
    }
    cout << count;
}