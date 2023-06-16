#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    while(n--)
    {
        bool ans = true;
        int x ;
        cin>>x;
        string s;
        cin>>s;
        if(x==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        for (int i = 1 ; i < s.size() ; i++)
        {
            if(s[i]==s[i-1])
            {
                ans = false;
                break;
                //cout<<"hi";
                
            }
            
        }
        int d = 0;
        for (int i = 0 ; i < s.size() ; i++)
        {
            for(int j = i+1 ; j < s.size(); j++)
            {
                
                d++;
                if (s[j]==s[i])
                {
                    if ((j-i-1)%2==0)
                    {
                        //cout<<d<<" "<<s[i]<<" "<<i <<" "<<s[j]<<" "<<j<<endl;;
                        ans = false;
                    }
                }
            }
        }
        if (ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}