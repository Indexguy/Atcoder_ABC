
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N - S.size(); i++)
    {
        cout << 'o';
    }
    cout << S << endl;
}