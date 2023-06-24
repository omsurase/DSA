#include<bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main ()
{   node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node (4);
    root->left->right = new node(5);
    inorder(root);
    return 0;
}