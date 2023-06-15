/*
ID: omsurase1
TASK: friday
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n ;
    fin>>n;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
    int dats [7] = {0, 0, 0, 0, 0, 0, 0};
    int curr =0;
    for(int i = 1900 ; i <=( 1900+n-1 ); i++)
    {
        for (int m = 0 ; m < 12 ; m++)
        {
            dats[(curr+12)%7]++;
            if(m == 1)
            {
                if (i % 400 == 0) {
                    curr = (curr+months[m]+1)%7;
                } else if (i % 100 == 0) {
                   curr = (curr+months[m])%7;
                } else if (i % 4 == 0) {
                    curr = (curr+months[m]+1)%7;
                } else {
                    curr = (curr+months[m])%7;
                }
                
            }
            else
            {
                
                curr = (curr+months[m])%7;
                
            }

            
        }
    }
    fout<<dats[5]<<" "<<dats[6]<<" "<<dats[0]<<" "<<dats[1]<<" "<<dats[2]<<" "<<dats[3]<<" "<<dats[4];
    fout<<endl;
    return 0;
}