#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b)
{
    return (a % b + b) % b;
}

int main()
{
    int n;
    cin >> n;
    int array[n][n] = {};
    array[0][(n - 1) / 2] = 1;
    int r = 0;
    int c = (n - 1) / 2;
    int k = 1;
    for (int i = 0; i < n * n - 1; i++)
    {
        int r_kari = mod(r - 1, n);
        int c_kari = mod(c + 1, n);
        if (array[r_kari][c_kari] == 0)
        {
            array[r_kari][c_kari] = k + 1;
            r = r_kari;
            c = c_kari;
        }
        else
        {
            r = mod(r + 1, n);
            array[r][c] = k + 1;
        }
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}