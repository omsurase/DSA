#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> ans;
        int n,k,x;
        cin>>n>>k>>x;
        if (k ==1 && x==1)
            {
                cout<<"NO"<<endl;
                continue;
            }
        if (x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for (int i = 1 ; i <= n ; i++)
            {
                cout<<"1 ";
            }
            cout<<endl;
            continue;
        }
        bool flag = true;
        while (n>=0)
        {
            

            while(n>=k)
            {
                n=n-k;
                ans.push_back(k);
            }
            if (n == 0)
            {
                flag = false;
                break;
            }
            k--;
            if (k==x) k--;
            if (k<=0)
            {
               
                break; 
            }
            
        }
        
        if (flag==false)
        {
          
            cout<<"YES"<<endl;
            cout<<ans.size()<<endl;
            for (auto i : ans)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            
        }
        else 
        {
            cout<<"NO"<<endl;
            
        }

        
    }
    return 0;
}