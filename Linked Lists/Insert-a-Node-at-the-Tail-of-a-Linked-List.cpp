/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* originalHead = head;
    Node* newTail = new Node;
    newTail->data = data;
    newTail->next = NULL;
    if(head == NULL)
        return newTail;
    while(head->next != NULL)
        head = head->next;
    head->next = newTail;
    return originalHead;
}
