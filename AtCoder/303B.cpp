#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n , m;
    cin>>n>>m;
    int arr[n][n]={0,0};
    int counter=0;
    int a[n]={0};
    for(auto &x:arr)
    {
        for(auto &y:x)
        {
            y=0;
        }
    }
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0 ;  j< n ; j++)
        {
            cin>>a[j];
        }
        int k = 1 ;
        while ( k <n  )
        { 
            if(arr[a[k-1]-1][a[k]-1]==0)
            {   
               
                counter = counter+1;
                arr[a[k-1]-1][a[k]-1]=1;
                counter = counter+1;
                arr[a[k]-1][a[k-1]-1]=1;
                
            }
            k++;
        }
       
    }
    counter = ((n*n) - (counter + n))/2;
    cout<<counter;
    return 0;
}