void split(Node* head,Node* &a,Node* &b)
{
    
    Node* temp = head;
    Node* fast = head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            temp=temp->next;
        }
        
    }
    
    a=head;
    b=temp->next;
    temp->next=NULL;
    
}

Node* merge(Node* a,Node* b)
{
    Node* head_ref=NULL;
    
    if(a==NULL)
    {
        return b;
    }
    else if(b==NULL)
    {
        return a;
    }
    
    if(a->data <= b->data)
    {
            head_ref = a;
            
            head_ref->next = merge(a->next,b);
            
    }
    else
    {
        head_ref = b;
        head_ref->next = merge(a,b->next);
    }
    
    return head_ref;
}

Node* mergeSort(Node* head) {
    
    if(!head || head->next==NULL)
    {
        return head;
    }

    
    Node* a=NULL;
    Node* b=NULL;
    split(head,a,b);
    
    a=mergeSort(a);
    b=mergeSort(b);
    
    Node* head_ref=merge(a,b);
    
   return head_ref;
}
