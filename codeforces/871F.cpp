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
        if (nodes==0) 
        {
            cout<<"0 0"<<endl;
            return 0;
        }
        //unordered_map<int,int>Map;
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
            if (snowflake[i].size() == 1) { 
            m = snowflake[i].size();
            index = i;
            break;
           }
             
        }
        
        int size2 = snowflake[snowflake[index][0]].size()-1;
        int count2=0;
        bool flag=true;
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