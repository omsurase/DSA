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

node *deleteCLL ( int index , node * head)
{
    if (index == 1)
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
    else
    {
        node *p = head->next;
        for(int a =1; a != index-2; a++)
        {
            p = p->next;
        }
        node * temp = p->next;
        p->next = temp ->next;
        delete temp;
        return head;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = head;
    head = deleteCLL( 1,head);
    cout<<head->data<<" ";
    for (node * p = head->next ; p !=head ; p = p->next)
    {
        cout<<p->data<<" ";
    }
    return 0;
}