#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int np;
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    fin>>np;
    string m[np];
    int balance[np]={ 0 };
    for (int i = 0 ; i < np ; i++)
    {
        string name;
        fin>>name;
        m[i]=name;
    }

    for (int i = 0 ; i < np ; i++)
    {
        string name;
        fin>>name;
        
        int x;
        for(int j = 0 ; j < np ; j++)
        {
            if(m[j]==name)
            {
                x=j;
            }
        }
        
        int b,n;
        fin>>b>>n;
        if(n==0)
        {
            continue;
        }
        int gift = b/n;
        balance[x]=balance[x]-(gift*n);
        //cout<<b<<" "<<n<<" "<<gift<<" "<<balance[x]<<endl;
        for(int k = 0 ; k < n ; k++)
        {
            string f;
            fin>>f;
            int y;
            for(int j = 0 ; j < np ; j++)
            {
                if(m[j]==f)
                {
                    y=j;
                }
                
            }
            balance[y]=balance[y]+gift;
        }
    }
        for (int i = 0 ; i < np ; i++)
        {
            fout<<m[i]<<" "<<balance[i]<<endl;
        }
    return 0;
}