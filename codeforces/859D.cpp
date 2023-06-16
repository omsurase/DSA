#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x ;
    cin>>x;
    while(x--)
    {
       int n , q;
       int ans;
       cin>>n>>q;
       int a[n+1]={0};
       int prefix[n+1]={0};
       for(int i = 1 ; i < n+1 ; i++)
       {
        int c;
        cin>>c;
        a[i]=c;
        prefix[i] = prefix[i-1]+c;
       }
       while(q--)
       {
        int l , r, k;
        cin>>l>>r>>k;
        ans = prefix[n] - prefix[r] + prefix[l-1];
        ans = ans + k*(r - l +1);
        if(ans%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
       }
    }
    return 0;
}