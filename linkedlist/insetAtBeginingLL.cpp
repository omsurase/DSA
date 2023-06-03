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
node *inserAtBegining(int x, node *head)
{
    node *temp = new node(x);
    temp->next = head;
    head = temp;
}
int main ()
{
    node *n1 = new node (10);
    n1->next = new node(20);
    n1->next->next = new node(30);

    n1=inserAtBegining(100, n1);
    while (n1!=NULL)
    {
        cout<<n1->x<<endl;
        n1=n1->next;
    }
    return 0;
}