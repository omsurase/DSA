/*
ID: omsurase1
TASK: milk2
LANG: C++                 
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    int n;
    fin>>n;
    int a=0 , b=0;
    vector<pair<int,int>> t(n);
    for (int i = 0; i < n ; i++)
    {
        fin>>a>>b;
        t[i]={a,b};
    }
    sort(t.begin(),t.end());
    a = t[0].first;
    b = t[0].second;
    int ans1=0 ,ans2=0;
    // for (int i = 0; i < n ; i++)
    // {
        
    //     fout<<t[i].first<<" "<<t[i].second<<endl;
    // }
    
    if(n==1)
    {
        fout<<t[0].second - t[0].first<<" "<<"0"<<endl;
        return 0;
    }
    
    for (int i = 1 ; i < n ; i++)
    {
        if (t[i].first>b)
        {
            ans1 = max(ans1 , (b-a));
            ans2 = max(ans2,(t[i].first-b));
            
            a= t[i].first;
            b =t[i].second;            
        }
        
            if (t[i].second>b)
            {
                b = t[i].second;
            }
    }
    ans1 = max(ans1 , (b-a));
    
    
    fout<<ans1<<" "<<ans2<<endl;
    return 0;
}