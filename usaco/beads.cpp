#include<bits/stdc++.h>
using namespace std;
int main ()
{   int n;
    cin>>n;
    string s;
    int e = -10e7;
    cin>>s;
    int i=n-1,j=0;
    while(s[0]==s[i])
    {
        i--;
        j++;
        
    }
    while(s[i]=='w')
    {
        i--;
        j++;
    }
    cout<<s[n-1]<<endl;
    cout<<++i<<" "<<j<<endl;
    string s1 = s.substr(i,j);
    s = s1+s;
    cout<<s<<endl;
    i=0;
    int b = 1;
    while(i<s.size())
    {
        j = 1;
        
        if(s[i]==s[i+1]&& i<s.size())
        {
           
            ++j;
        }
        i++;
        if(s[i]=='w' && i<s.size())
        {
            
            ++j;
        }
        else
        {
            e = max(e,j);
            j=1;
        }
        i++;
        e = max(e,j);  //bwwbbrwrbrbrrbrbrwrwwrrwwbbbb
        
    }
    cout<<e<<endl;
    return 0;
}