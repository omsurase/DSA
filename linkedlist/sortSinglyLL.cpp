#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
    node (int a)
    {
        data =a;
        next = NULL;
    }
};
node * insert (int a , node * head)
{
    
    node *temp1 = head;
    while (a>=temp1->data && temp1->next!=NULL)
    {
        temp1 = temp1 -> next;
    }
    if(temp1 == head)
    {
        node *temp = new node (a);
        temp->next = temp1;
        head = temp;
        return head;
    }

    if(temp1->next==NULL)
    {
        node *temp = new node (a);
        temp1->next = temp;
        return head;
    }
    node *temp2 = head;
    while (temp2->next !=temp1)
    {
        temp2 = temp2 ->next;
    }
    node *temp = new node (a);
    temp2->next = temp;
    temp->next = temp1;
    return head;
}
int main ()
{
    node * head = new node (10);
    head->next = new node (20);
    head ->next->next = new node (30);
    head = insert (45, head);
    while (head !=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}