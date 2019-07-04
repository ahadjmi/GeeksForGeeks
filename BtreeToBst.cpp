/*This is a function problem.You only need to complete the function given below*/
/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/*Your code here*/
Node* BST(Node* root,int d)
{
    if(root==NULL)
    {
        return newNode(d);
    }
    if(root->data >= d)
    {
        root->left = BST(root->left,d);
    }
    else
    {
        root->right = BST(root->right,d);
    }
    
    return root;
}

void build(Node* root,queue<int> &q)
{
    
    if(root==NULL)
    {
        return;
    }
    
    q.push(root->data);
    build(root->left,q);
    build(root->right,q);
    
    return;
}

Node *binaryTreeToBST(Node *root)
{
     queue<int> q;
     Node* temp = NULL;
     Node* k;
     build(root,q);
     
     while(!q.empty())
     {
        temp = BST(temp,q.front());
         
         q.pop();
     }
