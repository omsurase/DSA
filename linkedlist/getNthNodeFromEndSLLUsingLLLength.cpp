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
    node* temp = head;
    int counter = 0;
    while (temp)
    {
        counter ++;
        temp = temp->next; //10 20 30 40 50
    }
    temp = head;
    counter = counter - a;
    while (counter--)
    {
        temp = temp->next;
    }
    cout<<temp->data<<endl;


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
