#include<iostream>
using namespace std ;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int a)
    {
        data = a;
        next = NULL;
        prev = NULL;
    } 
};

void reverse(node *head, node *prev)
{
    while (head->next !=NULL)
    {
        head=head->next;
    }
    node* temp =NULL;
    while (prev != NULL)
    {   temp = prev-> next;
        prev ->next = prev-> prev;
        prev->prev = temp;
        prev = prev ->next;
    }
    //10 20 30 40
    while (head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
int main ()
{
    node *head = new node (10);
    head->next = new node(20);
    head->next->prev = head;
    head->next->next = new node (30);
    head->next->next->prev = head->next;
    head->next->next->next = new node (40);
    head->next->next->next->prev = head->next->next;
    node * prev = head->next->next->next;
    reverse(head,prev);
    return 0;
}