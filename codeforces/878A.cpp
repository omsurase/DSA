#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        string ans;
        
        cin>>s;
        char x = s[0];
        for(int i = 1 ; i < n; i++)
        {
            if (x=='1')
            {
                x = s[i];
            }
            else if (s[i]==x)
            {
                ans.push_back(s[i]);
                x = '1';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}