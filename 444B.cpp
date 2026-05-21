#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int l = i;
        int sum = k;
        while (l != 0)
        {
            sum = sum - l % 10;
            l = l / 10;
        }
        if (sum == 0)
        {
            count++;
        }
    }
    cout << count;
}