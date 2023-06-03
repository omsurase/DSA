#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node *address;
    Node (int x)
    {
        data = x;
        address = NULL;
    }

};

int main ()
{
    Node *N1 =new Node(10);
    Node *n2= new Node(20);
    N1->address = n2;
    return 0;
}