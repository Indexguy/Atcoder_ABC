#include <bits/stdc++.h>
using namespace std;

vector<int> l(100);
int n;

long long int count(long long int count1, long long int count2, double current, int i)
{
    double plus = current + l[i];
    double minus = current - l[i];
    if (current < 0)
    {
        if (plus > 0)
        {
            count1++;
        }
    }
    else
    {
        if (minus < 0)
        {
            count2++;
        }
    }
    i++;
    if (n != i)
    {
        long long int count_p = count(count1, count1, plus, i);
        long long int count_m = count(count2, count2, minus, i);
        if (count_p > count_m)
        {
            return count_p;
        }
        else
        {
            return count_m;
        }
    }
    else
    {
        if (count1 > count2)
        {
            return count1;
        }
        else
        {
            return count2;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> l[i];

    double current = 0.5;
    cout << count(0, 0, current, 0);
}