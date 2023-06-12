#include<bits/stdc++.h>
using namespace std;
int main ()
{   int n;
    cin>>n;
    string s;
    int e = -10e7;
    cin>>s;
    // int i=n-1,j=0;
    // while(s[0]==s[i])
    // {
    //     i--;
    //     j++;
        
    // }
    // cout<<s[n-1]<<endl;
    
    // cout<<++i<<" "<<j;
    // string s1 = s.substr(i,j);
    // cout<<s1;
    // s = s1+s;
    s=s+s;
    int j = 0, c;
    for(int i = 0 ; i < 29*2;i++)
    {
        while (s[i]==s[i+1])
        {
            j++;
            i++;
        }
        c = max(e,j); 
    }
    cout<<c;
    return 0;
}