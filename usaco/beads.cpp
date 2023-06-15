/*
ID: omsurase1
TASK: beads
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int n;
    fin>>n;
    string s;
    fin>>s;
    s =" "+s+s+" ";
    int dpl[800][2]; // 0 -> red 1->blue
    int dpr[800][2];
    dpl[0][0]=dpl[0][1]=0;
    for ( int i = 1 ; i < n+n; i++)
    {
        
        if(s[i]=='r') dpl[i][0] = dpl[i-1][0] + 1, dpl[i][1] = 0;
        else if(s[i]=='b') dpl[i][1] = dpl[i-1][1] + 1, dpl[i][0] = 0;
        else if(s[i]=='w') dpl[i][0] = dpl[i-1][0] + 1, dpl[i][1] = dpl[i-1][1] + 1;        
    }
    for ( int i = 1 ; i < n+n; i++)
    {
        
        if(s[i]=='r') dpl[i][0] = dpl[i-1][0] + 1, dpl[i][1] = 0;
        else if(s[i]=='b') dpl[i][1] = dpl[i-1][1] + 1, dpl[i][0] = 0;
        else if(s[i]=='w') dpl[i][0] = dpl[i-1][0] + 1, dpl[i][1] = dpl[i-1][1] + 1;        
    }
    dpr[n+n+1][0]=dpr[n+n+1][1]=0;
    for ( int i = n+n ; i > 0; i--)
    {
        
        if(s[i]=='r') dpr[i][0] = dpr[i+1][0] + 1, dpr[i][1] = 0;
        else if(s[i]=='b') dpr[i][1] = dpr[i+1][1] + 1, dpr[i][0] = 0;
        else if(s[i]=='w') dpr[i][0] = dpr[i+1][0] + 1, dpr[i][1] = dpr[i+1][1] + 1;        
    }

    int ans = 0;
    for ( int i = 1 ; i < n+n; i++)
    {
        ans = max(ans, max(dpl[i][0],dpl[i][1] ) +max(dpr[i+1][0],dpr[i+1][1] ));
    }
    ans = min(ans,n);
    fout<<ans<<endl;
    return 0;
}