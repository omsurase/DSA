#include<bits/stdc++.h>
using namespace std;
int main ()
{   int n;
    cin>>n;
    string s;
    int max = 10e7;
    cin>>s;
    int i=n-1,j=0;
    while(s[0]==s[i])
    {
        i--;
        j++;
        
    }
    cout<<s[n-1]<<endl;
    
    cout<<++i<<" "<<j;
    string s1 = s.substr(i,j);
    cout<<s1;
    s = s1+s;
    return 0;
}