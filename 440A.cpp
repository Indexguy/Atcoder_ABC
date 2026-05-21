#include <bits/stdc++.h>
using namespace std;

int beki(int y)
{
    int r = 1;
    for (int i = 0; i < y; i++)
    {
        r *= 2;
    }
    return r;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int result = x * beki(y);
    cout << result;
}