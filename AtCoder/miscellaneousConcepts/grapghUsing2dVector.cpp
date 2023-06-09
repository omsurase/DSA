#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //undirected graphs
    //undirected weighted graphs
    //directed graphs
    //directed weighted graphs
    int n = 6 , edges = 6;
    vector <vector <int>> Mygraph (n);
    int node1 = 0 , node2 =0;

    //undirected graph
    for (int i = 0 ; i < edges ; i++)
    {
        cin>>node1>>node2;
        Mygraph[node1].push_back(node2);
        Mygraph[node2].push_back(node1);
        
    }

    //directed graph
    for (int i = 0 ; i < edges ; i++)
    {
        cin>>node1>>node2;
        Mygraph[node1].push_back(node2);
        
        
    }

    //undirected weighted graph
    vector <vector <pair<int,int>>> Mygraph (n);
    int weight=0;
    for (int i = 0 ; i < edges ; i++)
    {
        cin>>node1>>node2>>weight;
        Mygraph[node1].push_back(make_pair(node2,weight));
        Mygraph[node2].push_back(make_pair(node1,weight));
        
    }

    //directed wighted graph
    for (int i = 0 ; i < edges ; i++)
    {
        cin>>node1>>node2>>weight;
        Mygraph[node1].push_back(make_pair(node2,weight));
        Mygraph[node2].push_back(make_pair(node1,weight));
        
    }
    //graph print
    for (int i = 0; i < n; i++)
    {
        // print the current vertex number
        cout << i << " => ";
 
        // print all neighboring vertices of a vertex `i`
        for (int v: Mygraph[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    // int visited[n] ={0};
    // visited[0]=1;
    // queue<int> q;
    // q.push(0);
    // vector<int>bfs;
    // while(!q.empty())
    // {
    //     int node = q.front();
    //     q.pop();
    //     bfs.push_back(node);

    //     for (auto it : Mygraph[node])
    //     {
    //         if (!visited[it])
    //         {
    //             visited[it] = 1;
    //             q.push(it);
    //         }
    //     }
    // }

    // for (auto it : bfs)
    // {
    //     cout<<it<<" ";
    // }
    return 0;
}