#include<iostream>
using namespace std;

struct node
{
    int data; 
    node * next;
    node (int x)
    {
        data = x ;
        next = NULL;
    }
};
void deleteAtEnd(node * head)
{
    node * temp = head;
    while(temp -> next-> next != NULL)
    {
        temp = temp -> next;
    }
    node *temp1 = temp->next;
    temp->next = NULL;
    delete temp1;
}
int main ()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    deleteAtEnd(head);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    return 0;
}