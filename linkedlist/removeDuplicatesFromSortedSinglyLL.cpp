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

void removeDuplicates(node* head)
{
    // 10 10 10 20 30 30 
    node* temp = head;
    while(temp && temp ->next)
    {
        node * t = temp->next;
        if (temp->data == t->data)
        {
            temp-> next= t->next;
            t->next =NULL;
            delete t;
            t = temp->next;
            if (t==NULL)
            {
                break;
            }
        }
        else
        {
         temp = temp->next;   
        }
        
    }

}
int main ()
{
    node *head = new node(10);
    head -> next = new node(10);
    head -> next -> next = new node(10);
    head -> next -> next->next = new node(20);
    head -> next -> next->next->next = new node(30);
    head -> next -> next->next->next->next = new node(30);
    removeDuplicates(head);
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}