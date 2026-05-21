#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long long int sum = 0;
    int i = n;
    while (true)
    {
        sum += i;
        if (sum >= k)
        {
            cout << (i - n);
            break;
        }
        i++;
    }
}