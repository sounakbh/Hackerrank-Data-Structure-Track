/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node* currentNode = head; //current node to traverse linked list
    Node* prevNode = NULL; //to keep track of previous node
    for(int i = 0; i < position; i++){ //traversing till the (position)'th position'
        prevNode = currentNode; //making the previous node as current node
        currentNode = currentNode->next; //making the current node as the next node
    }
    if(position != 0)
        prevNode->next = currentNode->next; //updating the (position - 1)'th node
    else
        head = head->next; //updating the head node
    free(currentNode); //deleting the current node
    return head; //returning the head node
}
