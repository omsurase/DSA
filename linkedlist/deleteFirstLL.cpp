#include<iostream>
using namespace std;

struct node
{
    int data;
    node * next ;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

node * deleteAtFirst(node * head)
{
    node * temp = head;
    head = head-> next;
    delete temp;
    return head;
}
int main ()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head=deleteAtFirst(head);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head = head-> next;
    }
    return 0;
}