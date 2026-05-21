#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 1;
    int r = 1000000000;
    int mid;
    bool flag = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += mid / a[i];
        }
        if (sum == k)
        {
            true;
            break;
        }
        else if (sum > k)
        {
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    if(flag){
        cout << mid << endl;
    }else{
        for(int i=0;i<n;i++){
            
        }
    }
    
}