#include<iostream>
using namespace std;

struct node
{
    int x;
    node *next;
    node(int a)
    {
        x =a;
        next = NULL;
    }
};

node* reverse(node* head , node * prev)
{
    // 10 20 30 40 50
    if (head == NULL)
    return prev;
    node * next = head->next;
    head->next = prev;
    return reverse (next , head);
}
int main ()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next-> next = new node(40);
    head -> next -> next-> next -> next= new node(50);
    node * temp = head -> next -> next-> next -> next;
    head = reverse(head , NULL);
    while (head != NULL)
    {
        cout<<head->x<<" ";
        head=head->next;
    }
    return 0;
}