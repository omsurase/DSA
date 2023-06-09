#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long x , y, z;
    cin >>x>>y>>z;
    string s;
    cin>>s;
    long long a = count(s.begin(), s.end(),'a');
    long long A = s.length() - a;
    if(a>=A)
    {
        cout<<(a*x+A*y);   
    }
    else
    {
        int sol=0;
        bool caps = false;
        for(int i = 0 ; i<s.size(); i++)
        {
            if (s[i]=='A' && s[i+1]=='A' )
            {
                if(caps== false)
                {
                    caps=true;
                    sol = sol+z;
                }
            }
            if(s[i]=='a' && caps==false)
            {
                sol = sol+x;
            }
            else if(s[i]=='a' && caps==true)
            {
                sol = sol +y;
            }
            else if (s[i]=='A' && caps == false )
            {
                sol = sol +y;

            }
            else if (s[i]=='A' && caps == true )
            {
                sol = sol +x;
            }
        }
        cout<<sol;
    }

    return 0;
}