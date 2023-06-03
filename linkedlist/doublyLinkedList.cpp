#include<iostream>
using namespace std;

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

int main ()
{
    node *head = new node (10);
    head->next = new node (20);
    head -> next ->prev = head;
    head ->next->next = new node (30);
    head ->next->next->prev = head ->next;
    node *last = head ->next->next;
    while (last !=NULL)
    {
        cout << last-> data<<endl;
        last = last-> prev;
    }
    while (head !=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    return 0;
}