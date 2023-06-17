#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t ;
    cin>>t;
    int prefix[15];
    prefix[0]=1;
    prefix[1] =1;

    for(int i = 2; i < 15; i++)
    {
       
       
    }
    prefix[14]=5001;
    //for(int i = 0 ; i < 15 ; i++) cout<<i<<" "<<prefix[i]<<endl;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int>c(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>c[i];
        } 
        sort(c.begin(), c.end());
        
        
        bool ans =  true;
        // for(int i = 0 ; i < n ; i++)
        // {
        //         if(i>13)
        //         {
        //             if(c[i]>prefix[14])
        //             {
        //                 ans = false;
        //                 break;
        //             }
        //         }
        //         else
        //         {
        //            if(c[i]>prefix[i])
        //             {
        //                 ans = false;
        //                 break;
        //             } 
        //         }
        // }
        if(c[0]!=1) 
        {
            ans = false;
        }
        else{
            long long sum = 1;
        for(int i = 1 ; i < n ; i++)
        {   
            if(sum<c[i])
            {
                ans = false;
                break;
            }
            sum = sum+c[i];

        }
        
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}