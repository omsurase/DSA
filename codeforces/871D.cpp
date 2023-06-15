#include<bits/stdc++.h>
using namespace std;
bool find(int n, int m) {
	if (n == m) {return true;}
	else if (n % 3 != 0) {return false;}
	else {return (find(n / 3, m) || find(2 * n / 3, m));}
}
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        int s , t;
        cin>>s>>t;
        
       
        
        bool aa = find(s,t);
        if (aa == true ) 
        {cout<<"YES"<<endl;}
        else 
        {cout<<"NO"<<endl;}
    }
    return 0;
}