#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n , x;
        cin>>n>>x;
        long long k=0;
        
        queue<long long> a;
        queue<long long> b;
        queue<long long> c;
        for (int i = 0 ; i < n ; i++)
        {
            long long j = 0 ;
            cin >> j ; 
            a.push(j);
        }
        for (int i = 0 ; i < n ; i++)
        {
            long long j = 0 ;
            cin >> j ; 
            b.push(j);
        }
        for (int i = 0 ; i < n ; i++)
        {
            long long j = 0 ;
            cin >> j ; 
            c.push(j);
        }
        if (k==x)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        while (k<x)
        {
            long long p;
        if (a.empty())
        {
             p = min (b.front(), c.front());
        }
        else if (b.empty())
        {
             p = min (a.front(), c.front());
        }
        else if (c.empty())
        {
             p = min (a.front(), b.front());
        }
        else if (b.empty()&&c.empty()) p = a.front();
        else if (a.empty()&&b.empty()) p = c.front();
        else if (a.empty()&&c.empty()) p = b.front();
        else  p = min(a.front(), min (b.front(), c.front()));
        
        k= k|p;
        if(k>x)
        {
            cout<<"No"<<endl;
            break;
        }
        
        else if ( k == x )
        {
            
            cout<<"Yes"<<endl;
            break;
        }
        if (p == a.front()) a.pop();
        else if (p == b.front()) b.pop();
        else if (p == c.front()) c.pop();
        if (a.empty() && b.empty() && c.empty() ) 
        {
            cout<<"No"<<endl;
            break;
        }
        }
        
        
    }
    return 0;
}