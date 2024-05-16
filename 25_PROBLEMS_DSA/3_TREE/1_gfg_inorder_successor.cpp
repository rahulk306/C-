#include<bits/stdc++.h>
using namespace std;

Node * inOrderSuccessor(Node *root, Node *x)
{
    Node * ans;    
    while(root!=NULL)
    {
        if(x->data >= root->data)
            root=root->right;
        else
        {
            ans= root;
            root=root->left;
        }
    }
    return ans;
}