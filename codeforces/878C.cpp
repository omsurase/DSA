#include<bits/stdc++.h>
using namespace std;
int main ()
    {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q; cin>>n>>k>>q;
        int a[n]; 
        for(int i = 0 ; i<n ; i++ ) cin>>a[i];
        int ans = 0;
        bool flag = true;
        int len = 0;
        for (int i=0 ; i<n ; i++)
        {
            if (flag==true && a[i]<=q) {
                int start=a[i];
                len=1;
                flag = false;
            }
            while(a[i]<=q) len++;
            if (a[i]>q){
                flag = true;
                if (len>=k)
                {
                    ans = ans + 
                } 
            }
        }
    }
    return 0;
}