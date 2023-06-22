#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n ;
        vector<vector<int>> tree(n);
        for (int i = 0 ; i < n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            tree[a]=b;
            tree[b]=a;
        }
        int p;
        cin>>p;
        while(p--)
        {
            int c,b;
            cin>>c>>b;
    
        int visited[n]={0};
        queue<int>q;
        q.push(c);
        visited[c]=1;
        int ansc=0;
        int cnt=0;
        while(!q.empty())
        {
          int a = q.front();
          q.pop();
          int ansc=0;
          int cnt=0;
          for (auto i : tree[a])
          {
            if(i>a)
            {
                if(visited[i]==0&&i!=0)
                {
                    cnt++;
                q.push(i);
                visited[i]=1;
                }
            }
            
          }  
          if(cnt==0){
            ansc++;
          }
        }     
    }
    return 0;
}