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

int search (int a , node* head)
{
    if (head->data==a)
    {
        return 0;
    }
    else
    {
        int res=0;
        res = search ( a, head->next);
        return(res+1);
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    int res= search(20 , head);
    cout<<res<<endl;
    return 0;
}