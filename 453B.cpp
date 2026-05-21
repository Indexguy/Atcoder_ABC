#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t >> x;
    vector<int> a(t + 1);
    for (int i = 0; i < t + 1; i++)
        cin >> a[i];

    cout << 0 << " " << a[0] << endl;
    int pre = a[0];
    for (int i = 1; i < t + 1; i++)
    {
        if (abs(a[i] - pre) >= x)
        {
            cout << i << " " << a[i] << endl;
            pre = a[i];
        }
    }
}