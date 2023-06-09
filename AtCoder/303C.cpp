#include<bits/stdc++.h>
using namespace std;
int main ()
{   long long n , m , h ,k;
    cin >> n >> m >> h >> k;
    string s;
    cin>>s;
    set <pair <long long,long long>> st;
    long long x , y;
    while(m--)
    {
        cin>>x>>y;
        st.insert(make_pair(x,y));
    }
    long long a = 0 , b = 0;
    long long counter = 0;
    for (int i = 0 ; i < s.size(); i++)
    {
        switch (s[i])
        {
            case 'R':
                h--;
                if (h == -1)
                {
                    cout<<"No";
                    break;
                }
                a=a+1;
                counter ++;
                if (st.find(make_pair(a,b))!=st.end() && h < k )
                {
                    h++;
                }
                if (counter >= n)
                {
                    cout<<"Yes";
                    break;
                }
                
                break;

            case 'L':
                h--;
                if (h == -1)
                {
                    cout<<"No";
                    break;
                }
                a=a-1;
                counter ++;
                if (st.find(make_pair(a,b))!=st.end() && h < k )
                {
                    h++;
                }
                if (counter >= n)
                {
                    cout<<"Yes";
                    break;
                }
                
                break;

            case 'U':
                h--;
                if (h == -1)
                {
                    cout<<"No";
                    break;
                }
                b=b+1;
                counter ++;
                if (st.find(make_pair(a,b))!=st.end() && h < k )
                {
                    h++;
                }
                if (counter >= n)
                {
                    cout<<"Yes";
                    break;
                }
                
                break;

            case 'D':
                h--;
                if (h == -1)
                {
                    cout<<"No";
                    break;
                }
                b=b-1;
                counter ++;
                if (st.find(make_pair(a,b))!=st.end() && h < k )
                {
                    h++;
                }
                if (counter >= n)
                {
                    cout<<"Yes";
                    break;
                }
                
                break;

            default :
                break;
        

        }
    }
    return 0;
}