#include<bits/stdc++.h>
using namespace std;

struct Mystack
{
    int *s;
    int cap;
    int top;
    Mystack (int a)
    {
        cap = a;
        s = new int [cap];
        top =-1;
    }

    int size()
    {
        return (top+1);
    }
    int peek()
    {
        return s[top];
    }
    void push(int a)
    {
        top++;
        s[top]=a;
        
    }
    int popp ()
    {
        int a = s[top];
        top--;
        return a;
    }
    bool isEmpty()
    {
        
        return (top==-1);
    }
};

int main ()
{
    Mystack mStack(10);
    mStack.push(5);
    mStack.push(15);
    mStack.push(25);
    cout<<mStack.size()<<endl;
    cout<<mStack.peek()<<endl;
    cout<<mStack.popp()<<endl;
    mStack.push(35);
    cout<<mStack.peek()<<endl;
    cout<<mStack.isEmpty()<<endl;
    return 0;
}    