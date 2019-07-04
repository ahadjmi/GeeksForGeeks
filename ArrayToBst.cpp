#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    

    
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
        
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
    return ;
}

Node* BST(Node* root,int d)
{
    if(root==NULL)
    {
        return new Node(d);
    }
    
    if(root->data >=d)
    {
        root->left = BST(root->left,d);
    }
    
    else
    {
        root->right = BST(root->right,d);
    }
    
    return root;
}

Node* mid(int arr[],int s,int e)
{
    
    if(s > e)
    {
        return NULL;
    }
  
 
    int m = (s+e)/2;
    
    Node* root = new Node(arr[m]);
    
    root = BST(root,arr[m]);
    
    root->left = mid(arr,s,m-1);
    root->right = mid(arr,m+1,e);
    
    return root;
}
int main()
 {
	 int t;
	 cin>>t;
	 
	 while(t--)
	 {
	     int n;
	     cin>>n;
	     
	     int arr[n];
	     
	     for(int i=0;i<n;i++)
	     {
	         cin>>arr[i];
	         
	     }
	     
	     Node* temp;
	     
	    temp = mid(arr,0,n-1);
	     
	     preorder(temp);
	     
	 }
	return 0;
}
