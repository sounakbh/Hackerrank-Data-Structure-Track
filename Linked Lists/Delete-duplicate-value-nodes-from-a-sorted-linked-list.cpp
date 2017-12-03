/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node* curr = head;
    Node* next;
    if(curr == NULL)
        return head;
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            next = curr->next->next;
            free(curr->next);
            curr->next = next;
        }
        else
            curr = curr->next; // else traverse forward
    }
    return head;
}

