#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        int arr[n];
        int z[n]={0};
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        int max = -1;
        for(int i = 0 ; i < n ; i++)
        {
            
            if(arr[i]==0) 
            {
                if(i==0)
                {
                    z[i]=1;
                    continue;
                }
                z[i]=z[i-1]+1;} 
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(z[i]>max) max = z[i];
        }
        cout<<max<<endl;
    }
    return 0;
}