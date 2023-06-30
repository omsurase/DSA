#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n ; i++) cin>>arr[i];
    int ans = ((9-n)*(10-n)*6)/2;
    cout<<ans<<endl;
}
return 0;
}