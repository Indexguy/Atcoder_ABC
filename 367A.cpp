#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string result = "Yes";
    if (b > c)
    {
        c += 24;
        if (b > a)
        {
            a += 24;
        }
    }
    /*cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;*/
    if (b < a && c > a)
    {
        result = "No";
    }
    cout << result << endl;
}