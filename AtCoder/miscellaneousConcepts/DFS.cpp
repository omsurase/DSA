#include<bits/stdc++.h>
using namespace std;
void dfs (int node , vector<vector<int>>Mygraph, int visited[])
{
    visited[node]=1;
    cout<<node<<" ";
    for(auto i : Mygraph[node])
    {   if(!visited[i])
        dfs(i,Mygraph, visited);
    }
}
int main ()
{
    int n = 5 , edges = 4;
    vector<vector<int>> Mygraph(n);
    int node1 = 0 , node2 =0;
    for (int i = 0 ; i < edges ; i++)
    {
        cin>>node1>>node2;
        Mygraph[node1].push_back(node2);
        Mygraph[node2].push_back(node1);  
    }
    int visited[n]={0};
    int start = 0;
    
    dfs(start, Mygraph, visited);
    return 0;
}