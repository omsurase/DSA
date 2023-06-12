/*
ID: omsurase1
TASK: ride
LANG: C++                 
*/

 /*LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin>>a>>b;
    int resa = 1 , resb = 1;
    for(int i = 0 ; i < a.size(); i++)
    {
       
        resa = resa*(a[i]-'A'+1);
    }
 
    for(int i = 0 ; i < b.size(); i++)
    {
        
        resb = resb*(b[i]-'A'+1);
    }

    resa = resa%47;
    resb= resb%47;
    
    if(resa == resb)
    {
    fout<<"GO"<<endl;
    }
    else
    {
    fout<<"STAY"<<endl;
    }
    return 0;
}