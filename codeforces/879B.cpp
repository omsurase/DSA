#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string l,r;
        cin>>l>>r;
        if (l==r)
        {
            cout<<"0"<<endl;
            continue;
        }
        string p;
        int len1 = l.length();
        int len2 = r.length();
        int maxLength = std::max(len1, len2);
        string paddedNum1(maxLength - len1, '0');
        string paddedNum2(maxLength - len2, '0');
        string paddedNum1Final = paddedNum1 + l;
        string paddedNum2Final = paddedNum2 + r;
        
       for (int i = 0; i < maxLength; i++) {
        int digit1 = paddedNum1Final[i] - '0';
        int digit2 = paddedNum2Final[i] - '0';
        int difference = abs(digit1 - digit2);
        p += to_string(difference);
    }
    
        bool step = false;
        long long ans = 0;
        for (int i = 0; i < maxLength; i++)
        {
            if (step == false)
            {
                ans = ans + (p[i]-'0');
                if (p[i]>'0')
                {
                    step = true;
                }
                else step = false;
            }
            else if (step == true)
            {
                ans = ans + 9;
                if (p[i]>'0')
                {
                    step = true;
                }
                else step = false;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}