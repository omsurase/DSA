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
        string s , t;
        cin>>s>>t;
        int count1 = 0 , count2 = 0;
        for (int i = 0 ; i < n ; i++)
        {
            if (s[i]==t[i]) count1++;
        }
        string r = t;
        reverse(r.begin(), r.end());
        if (s==t)
        {
            cout<<"0"<<endl;
            continue;
        }
        
        for (int i = 0 ; i < n ; i++)
        {
            if (s[i]==r[i]) count2++;
        }
        int ans=0;
        if (count1>=count2&&count1!=0)
        {
            //abcdefgh
            //hguedfbh
            //hbfdeugh
            count1 = n-count1;
            int nr = count1-1;
            if(nr%2)
            {
                ans++;
            }
            ans = ans + nr+count1;

        }
        //abc
        //efg
        //abcd
        //efgh
        else if (count1<count2)
        {
            count2 = n-count2;
            int nr = count2-1;
            if(nr%2==0)
            {
                ans++;
            }
            ans = ans + nr+count2;
        }
        else if (count1==count2 && count1 ==0)
        {
                ans = ans+n+n-1;
                       
        }
        cout<<ans<<endl;
    }
    return 0;
}