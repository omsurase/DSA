#include<bits/stdc++.h>
using namespace std;
int main ()
{   //normal 2d vector initailsed 
    vector<vector<int>> a;

    //another way to define a 2d vector
    vector <vector<int>> vect {
        {1 ,2 ,4},
        {5, 6 ,7},
        {7,8,9}
    };

    //jagged 2d vector
    int r = 4;
    int c[4] = {1,2,3,4};
    
    vector<vector<int>> vect(r);

    for(int i = 0; i < r; i++)
    {
        vect[i] = vector<int> (c[i]);
        for(int j = 0; j < c[i]; j++)
        {
            vect[i][j] = j + 1;
        } 
    }

    //2d vector having 4 rows each having 3 columns;
    vector<vector<int>> vect(4, vector<int>(3));
    //2d vector having 4 rows each having 3 columns and each cell having 0 as value;
    vector<vector<int>> vect(4, vector<int>(3 , 0));
    //enhanced for loop for traversal
    for(vector<int> a : vect)
    {
        for(int b:a)
        {
            cout<<" "<<b<<" ";
        }
        cout<<endl;
    }

    //auto would also work;
    for(auto a : vect)
    {
        for(auto b:a)
        {
            cout<<" "<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}