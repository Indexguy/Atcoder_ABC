#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    int j = 3;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        x *= 10.0;
        if (fmod(x, 10.0) == 0)
        {
            count++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (count > 0)
        {
            x = (int)x;
            x /= 10;
            count--;
        }
        else
        {
            x = (double)x;
            x /= 10.0;
        }
    }
    cout << x << endl;
}