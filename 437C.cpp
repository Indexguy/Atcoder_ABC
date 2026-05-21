#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> n(t);
    vector<int> result(t);
    for (int j = 0; j < t; j++)
    {
        cin >> n[j];
        vector<long long> w(n[j]);
        vector<long long> p(n[j]);
        vector<long long> sum(n[j]);
        for (int i = 0; i < n[j]; i++)
        {
            cin >> w[i] >> p[i];
        }
        for (int i = 0; i < n[j]; i++)
        {
            sum[i] = w[i] + p[i];
        }
        int sum_kari;
        for (int i = 0; i < n[j]; i++)
        {
            for (int k = i + 1; k < n[j]; k++)
            {
                sum_kari = sum[k];
                if (sum[k - 1] > sum_kari)
                {
                    sum[k] = sum[k - 1];
                    sum[k] = sum_kari;
                }
            }
        }
        result[j] = 0;
        long long pi_sum = 0;
        for (int i = 0; i < n[j]; i++)
        {
            pi_sum += p[i];
        }
        long long sum_value = 0;
        int count = 0;
        for (int i = 0; i < n[j]; i++)
        {
            sum_value += sum[i];
            if (pi_sum >= sum_value)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        result[j] = count;
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
}