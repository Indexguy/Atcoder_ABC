#include <bits/stdc++.h>
using namespace std;
#include <set>

int main()
{
    string s, t;
    cin >> s >> t;
    int n = (int)s.size();
    int size = (int)t.size();
    int count = 0;
    set<string> st;
    st.insert(t);
    int i = 0;
    while (i != n)
    {
        int j = i;
        string str = "";
        while (j != n)
        {
            str = str + s[j];
            if (st.find(str) == st.end())
            {
                st.insert(str);
                if (str != t)
                {
                    cout << str << endl;
                    count++;
                }
            }
            j++;
        }
        i++;
    }
    
    cout << count;
}