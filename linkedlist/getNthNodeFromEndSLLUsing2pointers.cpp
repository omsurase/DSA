#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

void getNthNodeFromEnd(int a , node* head)
{
    node* t1=head , *t2 = head;
    while (a--)
    {
        t1=t1->next; //  10 20 30 40 50
    }  
    while(t1)
    {
        t1 = t1->next;
        t2 = t2->next;
    }
    cout<<t2->data<<endl;

}

int main()
{
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    getNthNodeFromEnd(2, head);
    return 0;
}
   