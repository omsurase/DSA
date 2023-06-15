#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        int nodes,edges;
        cin>>nodes>>edges;
        vector<vector<int>> snowflake(nodes+1);
        for (int i = 0 ; i < edges; i++)
        {
            int a,b;
            cin>>a>>b;
            snowflake[a].push_back(b);
            snowflake[b].push_back(a);
        }

        int index = 0, m = 1000;
        for (int i = 1 ; i < nodes+1; i++)
        {
            if (snowflake[i].size() < m) { 
            m = snowflake[i].size();
            index = i;
        }
             
        }
        //cout <<snowflake[index][m-1]<<" "<< m<<endl;
        int size2 = snowflake[snowflake[index][m-1]].size()-1;
        
        int count2=0;
        for (int i = 1 ; i < nodes+1; i++)
        {
            if (snowflake[i].size() == size2+1) { 
            count2++;
           }
        }
        cout<<count2<<" "<<size2<<endl;;
    }
    return 0;
}