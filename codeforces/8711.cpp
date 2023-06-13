#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    while(a--)
    {
        string s="";
        string c = "codeforces";
        cin>>s;
        int counter=0;
        for (int i = 0 ; i < 10 ; i++)
        {
            if(s[i]!=c[i]) counter++;
        }
        cout<<counter;
    }
    return 0;
}