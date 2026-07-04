#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            a[i] = i;
        }
        else
        {
            a[i] = 0;
        }
    }
    vector<int> array(n);
    long long int count = 0;
    bool flag = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (flag)
        {
            count = count - a[i];
            array[i] = count + i;
            if (a[i] != 0)
            {
                flag = false;
            }
            else
            {
                array[i] = count - i;
            }
        }
        else
        {
            count = count + a[i];
            array[i] = count - i;
            if (a[i] != 0)
            {
                flag = true;
            }
            else
            {
                array[i] = count + i;
            }
        }
    }
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        result[array[i]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}