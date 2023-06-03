#include<iostream>
using namespace std ; 

struct node 
{
    int data ; 
    node * next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

void insertAtPosition(int x, int y , node * head)
{
    node *temp = new node(100);
    x--;
    while (x--)
    {
        head = head->next;
    }
    temp -> next = head -> next;
    head-> next = temp;
}

int main ()
{   
    node *head = new node (10);
    head -> next = new node (20);
    head-> next ->next = new node (30);
    head -> next-> next-> next = new node(40);

    insertAtPosition(2,100, head);
    while (head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    return 0;
}