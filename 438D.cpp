#include <bits/stdc++.h>
using namespace std;

void addWeight(vector<vector<char>> s, vector<vector<int>> array, int weight, int i, int j)
{
    
    int w_size = s[0].size();
    int h_size = s.size();
    if(w_size == j && h_size == i){
        array[i][j] = weight;
    }
    else if(w_size == j || h_size == i || s[i][j] == '#'){
        return ;
    }else{
        if(weight < array[i][j]){
            array[i][j] = weight;
        }
        
    }
}

int main()
{
    static int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    vector<vector<int>> array(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s[i][j];

        }
    }
    
}