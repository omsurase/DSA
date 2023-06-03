#include<iostream>
using namespace std;

struct node 
{
    int data;
    node* next;
    node* prev;
    node (int a)
    {
        data = a;
        next = NULL;
        prev = NULL;
    }
};

node * deleteHead(node *head)
{
    node *temp = head; 
    head = head ->next;
    head->prev = NULL;
    delete temp;
    return head;
}
int main()
{
    node *head = new node (10);
    head ->next = new node(20);
    head -> next ->next = new node(30);
    head ->next -> next ->next = new node (40);
    head ->next->prev = head;
    head ->next->next->prev = head->next;
    head ->next ->next->next->prev = head ->next->next;
    node *head1 =head;
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    head1 = deleteHead(head1);
    while (head1!=NULL)
    {
        cout<<head1->data<<" ";
        head1 = head1->next;
    }
    return 0;
}