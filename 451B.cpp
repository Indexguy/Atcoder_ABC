#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> array(m);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < m; i++)
        array[i] = 0;
    for (int i = 0; i < n; i++)
    {
        array[a[i] - 1] -= 1;
        array[b[i] - 1] += 1;
    }
    for (int i = 0; i < m; i++)
        cout << array[i] << endl;
}