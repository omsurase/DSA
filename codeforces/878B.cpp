#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n , k;
        cin>>n>>k;
        vector<long long> p(k);
        p[0]=1;
        for (long long i = 1 ; i < k ; i++)
        {
            p[i] = p[i-1] + pow(2,i);
        }
        long long count = 0;
        long long count1 = 0;
        for (long long i = 0 ; i < k ; i++)
        {
            if (p[i]<=n)count++;
            else if (i<=log2(n)) count1++;
        } 
        cout<<pow(2,count)+count1<<endl;
    }
    return 0;
}