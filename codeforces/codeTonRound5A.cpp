#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , m;
        cin>>n>>m;
        long long sumn=0;
        while (n--)
        {
            long long i;
            cin>>i;
            sumn+=i;
        }
        long long summ=0;
        while(m--)
        {
            long long j ;
            cin>>j;
            summ+=j;
        }
        if (sumn==summ)
        {
            cout<<"Draw"<<endl;            
        }
        else if(sumn>summ) cout<<"Tsondu"<<endl;
        else if (sumn<summ) cout<<"Tenzing"<<endl;
    }
    return 0;
}