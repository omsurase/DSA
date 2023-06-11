#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n ; i++)
    {   
        cin>>arr[i];
    }
    int q;
    cin>>q;
    pair<int,int> times[q];
    int d=0, e=0;
    for (int j =0 ; j < q ; j++)
    {
        cin>>d>>e;
        times[j].first=d;
        times[j].second=e;
        cout<<"hi"<<endl;
    }

    for (int k = 0 ; k < q; k++)
    {
        // int x = upper_bound(times.begin(), times.end(), times[k].first)-times.begin();
        // int y = upper_bound(times.begin(), times.end(), times[k].second)-times.begin();
        // cout<<x<<"  "<<y<<endl;
        cout<<times[k].first<<times[k].second<<endl;
    }
    return 0;
}