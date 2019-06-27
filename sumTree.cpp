pair<int,bool> sum(Node* root)
{
   
    if(root==NULL)
    {
        pair<int,bool> p(0,true);
        return p;
    }
    
    else if(root->left==NULL && root->right==NULL)
    {
        pair<int,bool> p(root->data,true);
        return p;
    }
    
    pair<int,bool> l = sum(root->left);
    pair<int,bool> r = sum(root->right);
    
    if((l.first+r.first) == root->data && l.second && r.second)
    {
        pair<int,bool> k(2*(root->data),true);
        return k;
    }
    
    pair<int,bool> m(root->data,false);
    
    return m;
}

bool isSumTree(Node* root)
{
     if(root==NULL)
     {
        return true;
     }
     
     pair<int,bool> p=sum(root);
     
     return p.second;
}