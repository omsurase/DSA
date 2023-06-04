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

int main()
{
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = head;
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}