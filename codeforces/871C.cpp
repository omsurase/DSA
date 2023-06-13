#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        unordered_map<int,int> x;
        x[11] = -1;
        x[10] = -1;
        x[01] = -1;
        int m11 = 10e5;
        int m01 = 10e5;
        int m10 = 10e5;
        int b;
        cin>>b;
        while(b--)
        {
            int a ;
            int s;
            cin>>a>>s;
            if (s == 11)
            {
                m11 = min(m11 , a);
                x[s] = m11;
            }
            else if (s == 01)
            {
                m01 = min (m01 , a);
                x[s] = m01;
            }
            else if (s == 10)
            {
                m10 = min (m10 , a);
                x[s] = m10;
            }  
        }
        int time= 10e5;
        if(x[11]!=-1) time = min(time , x[11]);
        if(x[10]!=-1&&x[01]!=-1) time = min(time , (x[01]+x[10]));
        if(time == 10e5) cout<<"-1"<<endl;
        else cout<<time<<endl;
    }
    return 0;
}