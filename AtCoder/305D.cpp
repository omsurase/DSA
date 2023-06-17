#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n] ;
    for (int i = 0; i < n ; i++)
    {   
        cin>>arr[i];
    }
    int q;
    cin>>q;
   
    int d=0, e=0;
    int x,y;
    
       cin>>d>>e;
       for(int m = 0 ; m < n; m++)
       {
        if (d>arr[m])
        {
            x = m+1;
        }
        if(e<arr[m])
        {
            y = m-1;
        }
       }

        if (x%2==0)
        {
            
        }
    cout<<x<<" "<<y;
    return 0;
}