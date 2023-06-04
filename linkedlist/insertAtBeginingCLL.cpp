#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
    node (int a)
    {
        data = a;
        next = NULL;
    }
};

node * insert (int data , node * head)
{
    node *temp = new node(data);
    temp->next = head;
    node *p = head->next;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = temp;
    head = temp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = head;

    head = insert(100, head);
    cout<<head->data<<" ";
    for (node * p = head->next ; p !=head ; p = p->next)
    {
        cout<<p->data<<" ";
    }
    return 0;
}