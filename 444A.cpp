#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int q = n % 10;
    bool flag = true;
    while (n != 0)
    {
        if (n % 10 != q)
        {
            flag = false;
            break;
        }
        else
        {
            q = n % 10;
            n = n / 10;
        }
    }
    if(flag){
        cout << "Yes";
    }else{
        cout << "No";
    }
}