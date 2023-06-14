/*
nodes at same distance from starting node are on same level.

BFS => nodes at same distance are printed and distance increases in ascending order.

INITIAL CONFIGURATION
1. 1 Queue is needed and initially it will have starting node only.
2. create 1 visited vectorr. for 0 based indexing size of visited array = no of nodes.
for  1 based indexing sixe of visited array equal to number of nodes+1. 
starting node at index 1 in visited array will be marked as visited.

Next steps:
while q is not empty keep taking out 1 element out of it at a time
after removing a given element from the queue add its neighbours to the queue
marks these members as visited in the visited array.
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{ 
    int n = 6 , edges = 6;
    vector<vector<int>> Mygraph(n);
    int node1 = 0 , node2 =0;
    for (int i = 0 ; i < edges ; i++)
    {
        cin>>node1>>node2;
        Mygraph[node1].push_back(node2);
        Mygraph[node2].push_back(node1);  
    }
    
    int sn = 1;
    int visited[n+1]={0};
    queue<int>q;
    q.push(1);
    visited[1]=1;
    while(!q.empty())
    {
      int a = q.front();
      q.pop();
      cout<<a<<" ";
      for (auto i : Mygraph[a])
      {
        if(visited[i]==0&&i!=0)
        {
        q.push(i);
        visited[i]=1;
        }
      }  
    }
    return 0;
}