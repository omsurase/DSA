#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n , d;  
    cin>>n;
    cin>>d;
    int x= 0 , y=0;
    vector< pair <int,int> > vect;
    int i =0;
    for ( i=0; i<n; i++)
    {
        cin>>x>>y;
        vect.push_back( make_pair(x,y) );
    }
i = 0;
    double dis[n];
    dis [0]=0;
    for (int j=0; j<n; j++)
    {//0 0 0 0
   
        for (int i=j+1; i<n; i++)
        {
            double a =((vect[j].first - vect[i].first)*(vect[j].first - vect[i].first))+((vect[j].second - vect[i].second)*(vect[j].second - vect[i].second));
            
            if (j ==0)
            {
                dis[i] = a;
            }
            else if (j!=0 && dis[i]>a)
            {
                dis[i] = a;
            }
          cout<<j<<i<<"  "<<a<<"  ";
        }
cout<<endl;
    }

     for (int j=0; j<n; j++)
     {
        if (dis[j]<=d*d)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

     }
    return 0;
}