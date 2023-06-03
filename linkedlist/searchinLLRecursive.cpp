#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

void search (int a , node* head, int counter)
{
    if (head->data==a)
    {
        cout<<counter<<endl;
        return;
    }
    else
    {
        counter++;
        search ( a, head->next,counter);
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    search(20 , head, 0);
    return 0;
}