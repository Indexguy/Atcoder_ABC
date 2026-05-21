#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<vector<char>> s(10000, vector<char>(10000));

void move(int i, int j, char pre)
{
    bool U, D, L, R = false;
    char c = s[i][j];
    switch (c)
    {
    case '.':
        U, D, L, R = true;
        break;
    case 'o':
        switch (pre)
        {
        case 'U':
            U = true;
            break;
        case 'D':
            D = true;
            break;
        case 'L':
            L = true;
            break;
        case 'R':
            R = true;
            break;
        }
        break;
    case 'x':
        switch (pre)
        {
        case 'U':
            D, L, R = true;
            break;
        case 'D':
            U, L, R = true;
            break;
        case 'L':
            U, D, R = true;
            break;
        case 'R':
            U, D, L = true;
        }
        break;
    }
    if (U)
    {
        if (i - 1 >= 0)
        {
           move(i - 1, j, 'U');
        } 
    }
}

int main()
{

    cin >> h >> w;
    int x = 0;
    int y = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == 'S')
            {
                y = i;
                x = j;
            }
        }
    }
}