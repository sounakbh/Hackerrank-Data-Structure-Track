/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    if(position == 0){
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = head;
        return new_node;
    }
    else{
        int i;
        Node* new_node = head;
        for(i = 1; i < position; i++)
            new_node = new_node->next;
        Node* temp = new Node;
        temp->data = data;
        temp->next = new_node->next;
        new_node->next = temp;
        return head;
    }
}
