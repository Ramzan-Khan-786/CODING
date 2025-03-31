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
//  Build Tree
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

// Build Tree from Level Order treversal
void buildbylevelorder(node* &root){
    queue<node* > q;
    cout<<"enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        //  left data
        cout<<"enter left data "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!= -1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        // right data
        cout<<"enter right data "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!= -1){
            temp->right=new node(rightdata);
            q.push(temp->right);
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

// postorder traversal
void postorder(node* root){
    if(root == NULL){
        return ;
    }
    // L
    postorder(root->left);
    // R
    postorder(root->right);
    // N
    cout<<root->data<<" ";
}

int main()
{
    node *root = NULL;
    // data :1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildbylevelorder(root);
    
    // data :1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = buildtree(root);
    
    
    cout<<endl<<"Level Order Traversal :"<<endl;    
    levelordertraversal(root);
    // cout<<endl<<"Inorder Traversal: "<<endl;
    // inorder(root);
    
    // cout<<endl<<"Preorder Traversal: "<<endl;
    // preorder(root);
    
    // cout<<endl<<"Postorder Traversal: "<<endl;
    // postorder(root);
    

    return 0;
}