#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int a)
    {
        data =a;
        next = NULL;
    }
};

node* reverseInGroups(node* head, int a)
{
    // 10 20 30 40 50 60 
    node *temp1 = head , *temp2 = head;
    a--;
    while (a--)
    {
        temp2 = temp2->next;
    }
    cout<<temp2->data;
    node * a = temp1->next;
    node *b = temp1->next->next;
    temp->next= NULL;
    temp1 =a;
    a->next=b;
    a=b;
    b=b->next;

}
int main ()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next->next = new node(40);
    head -> next -> next->next->next = new node(50);
    head -> next -> next->next->next->next = new node(60);
    reverseInGroups(head, 3);
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}