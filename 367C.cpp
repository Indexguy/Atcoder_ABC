#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> array)
{
    int sum = 0;
    for (int i = 0; i < array.size(); i++)
    {
        sum += array.at(i);
    }
    return sum;
}
bool same(vector<int> array1, vector<int> array2)
{
    for (int i = 0; i < array1.size(); i++)
    {
        if (array1.at(i) != array2.at(i))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    // RをBとし、Aを出力
}