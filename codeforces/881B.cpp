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
        vector<int> nums(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>nums[i];
        }

        long long sum = 0, cntn=0,cnt=0;

        for (int num : nums) {
            sum += abs(num);
            if(num<0)
            {
                cntn++;
            } 
            else if (num>0)
            {
                if (cntn>0)
                {
                    cnt++;
                    cntn=0;
                }
            }
        } 
        if (cntn>0)
                {
                    cnt++;
                    cntn=0;
                }
        
    
    cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}