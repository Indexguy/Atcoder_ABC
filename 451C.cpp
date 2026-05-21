#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    priority_queue<int,vector<int>,greater<int>> array;
    vector<int> result(Q);
    for (int q = 0; q < Q; q++)
    {
        int f, h;
        cin >> f >> h;
        if (f == 1)
        {
            array.push(h);
        }
        else
        {
            while (!array.empty() && array.top() <= h)
            {
                array.pop();
            }
        }
        result[q] = array.size();
    }
    for (int i = 0; i < Q; i++)
    {
        cout << result[i] << endl;
    }
}