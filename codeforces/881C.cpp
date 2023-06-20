#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        long long n;
        cin>>n;
        int j = 1;
        while (n!=1)
        {
            sum = sum+n;
            n = (floor)(n/2);
        }
        sum++;
        cout<<sum<<endl;
    }
    return 0;
}