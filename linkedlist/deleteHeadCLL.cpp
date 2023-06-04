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

node *deleteCLL ( node * head)
{
    node *temp = head;
    head = head->next;
    node *p = head->next;
    while (p->next!=temp)
    {
        p = p->next;
    }
    p->next = head;;
    delete temp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = head;
    head = deleteCLL( head);
    cout<<head->data<<" ";
    for (node * p = head->next ; p !=head ; p = p->next)
    {
        cout<<p->data<<" ";
    }
    return 0;
}