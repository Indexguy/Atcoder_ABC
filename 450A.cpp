#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n;
    n = n - 1;
    while (n != 0)
    {
        cout << "," << n;
        n = n - 1;
    }
}