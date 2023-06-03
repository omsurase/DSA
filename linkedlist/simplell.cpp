#include<iostream>
using namespace std;

struct node
{
    int x;
    node *next;
    node(int a)
    {
        x =a;
        next = NULL;
    }
};

int main ()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);

    while (head != NULL)
    {
        cout<<head->x<<endl;
        head=head->next;
    }
    return 0;
}