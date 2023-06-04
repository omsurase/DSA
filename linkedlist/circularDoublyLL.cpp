#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
    node *prev;
    node (int a)
    {
        data = a;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;
    head ->prev = head->next->next->next; //10-20-30-40
    head->next ->prev = head;
    head->next ->next->prev = head ->next;
    head->next->next->next->prev= head->next->next;
    node *last = head->next->next->next;
    cout <<head->data<<" ";
    for(node *p =head->next;p!=head;p=p->next)
    {
        cout<<p->data<<" ";
    }
    cout<<endl;
    cout <<last->data<<" ";
    for(node *p =last->prev;p!=last;p=p->prev)
    {
        cout<<p->data<<" ";
    }
    return 0;
}