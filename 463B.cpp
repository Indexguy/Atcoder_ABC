#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char x;
    cin >> n >> x;
    int v ;
    switch(x){
        case 'A':
            v = 1;
            break;
        case 'B':
            v = 2;
            break;
        case 'C':
            v = 3;
            break;
        case 'D':
            v = 4;
            break;
        case 'E':
            v = 5;
            break;
    }
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i][v - 1] == 'o')
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}