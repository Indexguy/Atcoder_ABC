#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    long long re[test];
    for (int t = 0; t < test; t++)
    {
        int n, w;
        cin >> n >> w;
        vector<long long> c(n);
        vector<int> k(n);
        vector<long long> value(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            k[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            
        }
    }
}

/*
int main()
{
    int test;
    cin >> test;
    long long re[test];
    for (int t = 0; t < test; t++)
    {
        int n,w;
        cin >> n >> w;
        vector<long long> c(n);
        vector<int> k(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            k[i] = i + 1;
        }
        int i_n = 2 * w;
        int x_k = 1;
        long long x = LONG_LONG_MAX;
        for (int i = 0; i < i_n; i++)
        {
            long long count = 0;
            for (int j = 0; j < n; j++)
            {
                long long result = (k[j] + x_k) % i_n;
                if (result < w)
                {
                    count += c[j];
                }
            }
            if (count < x)
            {
                x = count;
            }
            x_k++;
        }
        if (x == LONG_LONG_MAX)
        {
            x = 0;
        }
        re[t] = x;
    }
    for (int i = 0; i < test; i++)
    {
        cout << re[i] << endl;
    }
}*/