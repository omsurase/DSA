#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int n ;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int odd = 0;
        int even = 0;
        while(a--)
        {
            int n;
            cin>>n;
            if(n%2)
            {
                odd = odd +n;
            }
            else
            {
                even = even + n;
            }
            
        }
        if (odd>=even)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}