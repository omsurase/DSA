#include<iostream>
using namespace std;
struct node 
{
    int data;
    node *next;
    node *prev;
    node(int a)
    {
        data =a;
        next =NULL;
        prev = NULL;
    }
};

node * insert (int a , node * head)
{
    node *temp = new node(a);
    temp ->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

int main()
{
    node *head = new node (10);
    head->next = new node(20);
    head->next->prev = head;
    head -> next -> next = new node (30);
    head -> next ->next ->prev = head-> next;
    node *prev = head -> next -> next;
    head = insert (100, head);
    while (prev !=NULL)
    {
        cout<<prev->data<<endl;
        prev = prev->prev;
    }
    while (head != NULL)
    {
        cout<<head->data <<endl;
        head =head->next;
    }
    return 0;
}