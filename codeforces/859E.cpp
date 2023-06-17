#include<bits/stdc++.h>
using namespace std;

void testcase()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    a[0]=-1;
    int prefix[n+1]={0};
    for(int i = 1 ; i < n+1 ; i++)
    {
        cin>>a[i];
        prefix[i] = prefix[i-1]+a[i];
    }
    int index;
    int sum = 0;
    
    for(int i = 0 ; i <18; i++)
    {
        index = (n/2)+1;
        cout<<"?"<<" ";
        sum = prefix[index];
        for(int j = 1 ; j <=index; j++)
        {
            cout<<j<<" ";
            
        }
        //cout<<sum<<endl;
        int ans;
        cin>>ans;
        if(sum<ans)
        {
           while(index)
           {
                index = (index/2)+1;
                cout<<"?"<<" ";
                sum = prefix[index];
                for(int j = 1 ; j <=index; j++)
                {
                    cout<<j<<" ";

                }
           } 
        }
        cout<<endl;
    }
}

int main ()
{   int t;
    cin>>t;
    while(t--)
    {
        testcase();
    }
    return 0;
}