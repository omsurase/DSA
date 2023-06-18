#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int b ;
        cin>>b;
        int a[b]={0};
        int p = 0 , n = 0, sum = 0,prod=1 ;
        for(int i = 0 ; i < b ; i++)
        {
            int q = 0;
            cin>>q;
            a[i]=q;
            if(a[i] == -1)
            {
                n++;
            }
            else if (a[i] == 1) 
            {p++;}
            sum = sum+a[i];
            prod = prod*a[i];
            //
        }
        int moves = 0;
        //-1 -1 -1 1 1 1
        if(sum>=0 && prod == 1) cout<<"0"<<endl;
        else if (sum<0 && prod == 1) 
        {
            while (sum<0)
            {
                moves++;
                sum = sum+2;
                n--;
            }
            if(n%2)moves++;
            cout<<moves<<endl;
        }
        else if(sum>=0 && prod == -1) cout<<"1"<<endl;
        else if (sum<0 && prod == -1) 
        {
            while (sum<0)
            {
                moves++;
                sum = sum+2;
                n--;
            }
            if(n%2)moves++;
            cout<<moves<<endl;
        }  
        
    }
    return 0;
}