/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    Node* temp = new Node; //allocating a new node temp
    temp->data = data; //storing data element in temp
    temp->next = head; //pointing next of temp to head
    head = temp; // now head points to temp instead of NULL
    return head;
}

