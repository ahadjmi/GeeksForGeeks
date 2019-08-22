/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head,int x)
{
    Node* it=head;
    
    while(it->next!=NULL && it!=NULL)
    {
        if(head->data==x)
        {
            Node* temp;
            temp=head;
            head=temp->next;
            
            delete(temp);
        }
        else if(it->next->next==NULL && it->next->data==x)
        {
            it->next=NULL;
        }
        else if(it->next->data==x)
        {
            Node* curr=it->next;
            Node* pre= it;
            Node* nxt=curr->next;
            
            pre->next=nxt;
            delete(curr);
        }
        else
        {
            it=it->next;
        }
    }
    
    return head;
}
