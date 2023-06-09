#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int dx[4] = {1 , -1 , 0 , 0};
        int dy[4] = {0 , 0 , 1 , -1};
        int r,c;
        cin>>r>>c;
        vector<vector<int>> lakes(r,vector<int>(c));
        for(int i = 0 ; i < r ; i++)
        {
            for (int j = 0 ; j < c ; j++)
            {
                cin>>lakes[i][j];
            }
        }
        vector<vector<int>> visited(r,vector<int>(c,0));
        long long ans = 0,sum=0;
        for(int i = 0 ; i < r ; i++)
        {
            for (int j = 0 ; j < c ; j++)
            {
                if(visited[i][j]!=0)
                continue;
                if(lakes[i][j]==0)
                continue;
                queue<pair<int, int>> q;
                q.push({i,j});
                while(!q.empty())
                {
                    
                    pair<int, int> a = q.front();
                    q.pop();
                    visited[a.first][a.second]=1;
                    sum = sum + lakes[a.first][a.second];
                    //cout<<a.first<<" "<<a.second<<endl;
                    for (int dir = 0 ; dir < 4 ; dir++)
                    {
                        int x , y;
                        x= a.first+ dx[dir];
                        y = a.second+ dy[dir];
                        if (x >=0 && x< r && y >= 0 && y < c  && lakes[x][y]>0)
                        {
                            if(!visited[x][y])
                            {
                             q.push({x,y}); 
                             visited[x][y] = 1;  
                            }
                            
                            
                        }
                     
                    }
                    
                }
                ans = max(ans,sum);
                sum = 0;
            }
        }
        
        cout<<ans<<endl;

    }
    return 0;
}