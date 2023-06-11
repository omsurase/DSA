#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[7];
    a[0]=0;
    a[1]=3;
    a[2]=4;
    a[3]=8;
    a[4]=9;
    a[5]=14;
    a[6]=23;
    char p , q;
    cin>>p >>q;
    int ans =0;
    ans= a[p-'A']-a[q-'A'];
    if(ans<0)
    {
        cout<<(-1*ans);
    }
    else
    cout<<ans;
    return 0;
}