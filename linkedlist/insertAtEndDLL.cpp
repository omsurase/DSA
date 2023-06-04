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
    while (head->next!=NULL)
    {
        head = head->next;
    }
    head -> next = temp;
    temp->prev = head;
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
    
    while (prev !=NULL)
    {
        cout<<prev->data<<" ";
        prev = prev->prev;
    }
    cout<<endl;
    node *head1 = insert (100, head);
    while (head != NULL)
    {
        cout<<head->data <<" ";
        head =head->next;
    }
    return 0;
}