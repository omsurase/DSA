#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[6] = {3, 4, 5,6,8,9};
    int prefix[6];
    prefix[0]=arr[0];
    for(int i =1; i < 6; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
        cout<<prefix[i];
    }

    //sum of array between any two index l(including both the indexes) and r using prefix sum:
    //always check about these indexes.
    int l =1 , r =4;
    int res = prefix[4]-prefix[1-1];
    cout<<endl<<res;
    return 0;
}