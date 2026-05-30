#include <bits/stdc++.h>
using namespace std;
#include <set>

// 未完

int h, w;
int main()
{
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
        cin >> s[i];

    vector<vector<int>> array(h, vector<int>(w));
    set<pair<pair<int, int>, int>> st;
    bool black = false;
    bool white = false;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            array[i][j] = 1;
            if (s[i][j] == '#')
            {
                black = true;
                pair<int, int> p = {j, i};
                st.insert({p, 0});
                array[i][j] = 0;
            }
            else
            {
                white = true;
            }
        }
    }
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, -0, 1, -1, 1, -1, 0, 1};

    bool flag = true;
    while (flag)
    {
        flag = false;
        set<pair<pair<int, int>, int>> new_st;
        for (auto r : st)
        {
            pair<int, int> p = r.first;
            int x = p.first;
            int y = p.second;
            int count = r.second;
            for (int i = 0; i < 8; i++)
            {
                if (y + dy[i] >= 0 && y + dy[i] < h && x + dx[i] >= 0 && x + dx[i] < w)
                {
                    if (s[y + dy[i]][x + dx[i]] == '.')
                    {
                        flag = true;
                        array[y + dy[i]][x + dx[i]] = count + 1;
                        new_st.insert({{x + dx[i], y + dy[i]}, count + 1});
                        s[y + dy[i]][x + dx[i]] = '#';
                    }
                }
            }
        }
        st = new_st;
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (black && white)
            {
                if (array[i][j] % 2 == 0)
                {
                    cout << '#';
                }
                else
                {
                    cout << '.';
                }
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }
}