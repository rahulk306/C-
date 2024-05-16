#include<iostream>
using namespace std;
#include<queue>

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d)
        {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }

        else
        {
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void inorder(Node* root)
{
    if(root == NULL) return; 
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* insertintoBST(Node* root, int d)
{
    // base case
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if(d > root->data)
    {
        // right part me insert krna hai data ko
        root->right = insertintoBST(root->right, d);
    }
    else
    {
        // agr d root ka data se chhot hai to left part me insert kr denge
        root->left = insertintoBST(root->left, d);
    }

    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        root = insertintoBST(root, data);
        cin>>data;
    }
}

Node* minimum(Node* root)
{
    if(root->left == NULL)
        return root;
    else
        return minimum(root->left);
}

Node* maximum(Node* root)
{
    if(root->right == NULL)
        return root;
    else
        return maximum(root->right);
}

Node* deleteFromBST(Node* root, int val)
{
    // base case
    if(root == NULL) return root;

    if(root->data == val)
    {
        // 0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        // right child
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left != NULL && root->right != NULL)
        {
            int mini = minimum(root->right) ->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }

    else if(root->data > val)
    {
        // left part me jake dekho
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        // right part me jake dekho
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main()
{
    Node* root = NULL;
    
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);

    cout<<"Level Order Traversal is: "<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is: "<<endl;
    inorder(root);

    cout<<endl<<"Minimum value in the tree is: "<<endl;
    cout<<minimum(root)->data<<endl;

    cout<<"Maximum value in the tree is: "<<endl;
    cout<<maximum(root)->data<<endl;

    root = deleteFromBST(root, 30);

    cout<<"Level Order Traversal is: "<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is: "<<endl;
    inorder(root);

    return 0;
}