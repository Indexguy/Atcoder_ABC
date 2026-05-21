#include <bits/stdc++.h>
using namespace std;

int s_x(int n)
{
    return 2 * n * n + 3 * n;
}

int s_y(int n)
{
    return 2 * n * n + n;
}

int main()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l <= 0)
    {
        l = abs(l) / 2;
    }
    else
    {
        l = abs(l - 1) / 2;
    }
    if (r < 0)
    {
        r = abs(r + 1) / 2;
    }
    else
    {
        r = abs(r) / 2;
    }
    int y_sum;

    if (l < 0 && r < 0)
    {
        y_sum = s_x(l) - s_x(r);
    }
    else if (l > 0 && r > 0)
    {
        y_sum = s_x(r) - s_x(l);
    }
    else
    {
        y_sum = s_x(r) + s_x(l);
    }
    cout << "y_sum=" << y_sum << " ";

    if (d <= 0)
    {
        d = abs(d) / 2;
    }
    else
    {
        d = abs(d - 1) / 2;
    }
    if (u < 0)
    {
        u = abs(u + 1) / 2;
    }
    else
    {
        u = abs(u) / 2;
    }
    int x_sum;


    if (d < 0 && u < 0)
    {
        x_sum = s_y(d) - s_y(u);
    }
    else if (d > 0 && u > 0)
    {
        x_sum = s_y(u) - s_y(d);
    }
    else
    {
        x_sum = s_y(u) + s_y(d);
    }

    cout << "x_sum=" << x_sum<<endl;

    int sum = x_sum + y_sum;
    if (l < 0 && r >= 0 && d <= 0 && u >= 0)
    {
        sum ++;
    }
    cout << sum;
}