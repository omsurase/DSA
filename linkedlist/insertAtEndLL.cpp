#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
    node(int a)
    {
        data =a;
        next = NULL;
    }
};

void insertAtEnd(int x, node *head)
{
    node *temp = new node (x);
    node *head1 = head;
    while(head1->next!=NULL)
    {
        head1 = head1->next;
    }
    head1->next = temp;
    
}
int main ()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next-> next = new node (30);
    insertAtEnd(200,  head);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head = head-> next;
    }
    return 0;
}