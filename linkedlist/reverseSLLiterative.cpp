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

node* reverse(node* head)
{
    node * temp =head;
    node * next = head->next;
    temp->next=NULL;
    while(next)
    {
        head = next;
        next = next->next;
        head->next =temp;
        temp = head;
        head = next;
    }
    // 10 20 30 40 50 
    return temp;
}

int main ()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next-> next = new node(40);
    head -> next -> next-> next -> next= new node(50);

    head = reverse(head);
    while (head != NULL)
    {
        cout<<head->x<<" ";
        head=head->next;
    }
    return 0;
}