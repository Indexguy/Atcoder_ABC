#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, q;
    cin >> h >> w >> q;
    vector<int> d(q);
    vector<int> abc(q);
    for (int i = 0; i < q; i++)
    {
        cin >> d[i] >> abc[i];
    }
    for (int l = 0; l < q; l++)
    {
        if (d[l] == 1)
        {
            cout << abc[l] * w <<endl;;
            h = h - abc[l];
        }
        else
        {
            cout << abc[l] * h << endl;
            w = w - abc[l];
        }
    }
}