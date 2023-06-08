#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a = 0 ;
    cin >> a ;
    if (a <999)
    {
        cout<<a;
    }
    else if (a >= 1000 && a<= 9999)
    {  
        cout<<(a/10)*10;
    }
    else if (a >= 10000 && a<= 99999)
    {
       cout<<(a/100)*100;
        
    }
    else if (a >= 100000 && a<= 999999)
    {
        cout<<(a/1000)*1000;
    }
    else if (a >= 1000000 && a<= 9999999)
    {
           cout<<(a/10000)*10000;
    }
    else if (a >= 10000000 && a<= 99999999)
    {
        cout<<(a/100000)*100000;   
    }
    else if (a >= 10000000 && a<= 999999999)
    {
        cout<<(a/1000000)*1000000;
    }
    return 0;
}