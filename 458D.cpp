#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, q;
    cin >> x >> q;
    vector<int> a(q);
    vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        cin >> a[i] >> b[i];
    }
    vector<int> array = {x};
    int p = 1;
    for (int i = 0; i < q; i++)
    {
        array.push_back(a[i]);
        array.push_back(b[i]);
        p += 2;
        sort(array.begin(), array.end());
        cout << array[p / 2] << endl;
    }
}