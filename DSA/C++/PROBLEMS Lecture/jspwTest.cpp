#include <bits/stdc++.h>
using namespace std;
// creation of binary tree
class node
{

public:
    // data required
    int data;
    node *left;
    node *right;
    // constructor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the for Left: " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter for the Right: " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

// level order traversal
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


// inorder traversal

void inorder(node* root){
    if(root == NULL){
        return ;
    }
    // L
    inorder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inorder(root->right);
}

// preorder traversal

void preorder(node* root){
    if(root == NULL){
        return ;
    }
    // N
    cout<<root->data<<" ";
    // L
    preorder(root->left);
    // R
    preorder(root->right);
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    // data :1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"hello"<<endl;

    levelordertraversal(root);

    inorder(root);

    preorder(root);

    return 0;
}