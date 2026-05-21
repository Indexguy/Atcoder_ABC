#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < w; j++)
        {
            s[i][j] = str[j];
        }
    }
    int count = 0;
    for (int h1 = 0; h1 < h; h1++)
    {
        for (int w1 = 0; w1 < w; w1++)
        {
            for (int h2 = h1; h2 < h; h2++)
            {
                for (int w2 = w1; w2 < w; w2++)
                {
                    bool flag = true;
                    for (int i = h1; i <= h2; i++)
                    {
                        for (int j = w1; j <= w2; j++)
                        {
                            int x = h1 + h2 - i;
                            int y = w1 + w2 - j;
                            if (x >= 0 && x < h && y >= 0 && y < w)
                            {
                                if (s[i][j] != s[x][y])
                                {
                                    flag = false;
                                }
                            }
                            else
                            {
                                flag = false;
                            }
                        }
                    }
                    if (flag)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
}