#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >>a;
    int arr[a]={0};
    int i = 0;
    for (i = 0 ; i < a ; i++)
    {
        cin>>arr[i];
    }
    vector<int>vect;
    int j = 0;
    for ( i = 1 ; i < a ; i++)
    {
        vect[j]=arr[i-1];
        cout<<"hi";
        j++;
        if (arr[i-1] > arr[i])
        {
            if (arr[i-1]-arr[i]>1)
            { 
                int b = arr[i-1]--;
                while (b-arr[i]>1)
                {
                    vect[j]=b;
                    j++;
                    b--;
                    if (b-arr[i]==1)
                    {
                        vect[j]=arr[i];
                        j++;
                    }
                }
                
            }
        }
        else if(arr[i-1] < arr[i])
        {
            if (arr[i]-arr[i-1]>1)
            { 
                int b = arr[i-1]++;
                while (arr[i]-b>1)
                {
                    vect[j]=b;
                    j++;
                    b++;
                    if (arr[i]-b==1)
                    {
                        vect[j]=arr[i];
                        j++;
                    }
                }
                
            }
        }
     
    }

    for ( i = 0 ; i < vect.size() ; i++)
    {
        cout<<vect[i]<<" ";
    }
    return 0;
}