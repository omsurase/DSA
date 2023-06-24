//traversal are of 2 types BFS and DFS. DFS are further splitted into
//inorder preorder postorder traversal. DFS is recursion based
// inorder traversal (Left Root Right)
// preorder traversal (Root Left Right)
// postorder traversal(Left Right Root)
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int k)
    {
        data = k ;
        left = NULL;
        right = NULL;
    }
};

int main ()
{   
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    return 0;
}

