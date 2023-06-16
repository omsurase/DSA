#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    vector<vector<char>>square1 (n , vector<char>(n,'-'));
    vector<pair<int,int>> indexes1;
    int count = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            char r;
            cin>>r;
            square1[i][j]=r;
            if (r=='@')
            {
                indexes1.push_back({i,j});
                count++;
            }
        }
    }

    vector<vector<char>>square2 (n , vector<char>(n,'-'));
    vector<pair<int,int>> indexes2;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            char r;
            cin>>r;
            square2[i][j]=r;
            if (r=='@')
            {
                indexes2.push_back({i,j});
                
            }
        }
    }

    int x = 0 , y = 0;
    int temp = 0;
    for (int i = 0 ; i < count ; i++)
    {
        X = indexes1[i].first;
        y = indexes2[i].second;
        int a = x , b = y;
          
    }

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cout<<square1[i][j];
        }
        cout<<endl;
    }

    cout<<count<<endl;
    return 0;
}