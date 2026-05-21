#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> a(q);
    int count = 0;
    int flag = false;
    for (int i = 0; i < q; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int a_i = a[i];
        if (a_i == 1)
        {
            count++;
        }
        else if (a_i == 2)
        {
            if (count >= 1)
            {
                count--;
            }
        }
        else if (a_i == 3)
        {
            if (flag)
            {
                flag = false;
            }
            else
            {
                flag = true;
            }
        }
        if (count >= 3 && flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}