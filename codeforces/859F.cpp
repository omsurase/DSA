#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t ;
    cin>>t;
    while (t--)
    {
        
        unordered_map<string,pair<int, int>> direction;
        direction["dr"] = {1,-1};
        direction["dl"] = {-1,-1};
        direction["ur"] = {1,1};
        direction["ul"] = {-1,1};
        
        int n , m , i1, j1, i2,j2;
        string d;
        cin>>n>>m>>i1>>j1>>i2>>j2;
        cin>>d;
        vector<vector<int>> grid (n , vector<int>(m,0));
        //int i = i1 , j = j1;
        bool a = true;
        while(a )
        {
            if (grid[i][j]==1) continue;
            
            queue<pair<pair<int, int>,string>> q;
            q.push({{i1,j1},d});
            while(!q.empty())
            {
               pair<pair<int, int>,string> a = q.front();
                q.pop(); 
                //if (i ==a.first && j ==a.second ) ;
                grid[a.first.first][a.first.second]=1;
                string dir = a.second;
                strind dd = dir;
                while (dd==dir)
                {
                    int x , y, p,q;
                    x= a.first.first+ direction[dir].second.first;
                    y = a.first.second+ direction[dir].second.second;
                    if (x >=0 && x< n && y >= 0 && y < m)
                        {
                            if(!grid[x][y])
                            {
                             q.push({x,y}); 
                             grid[x][y] = 1;  
                            } 
                            p = x,q=x;  
                        }
                    else{
                        
                    }
                }
            }
                  
        }
        
    }
    return 0;
}