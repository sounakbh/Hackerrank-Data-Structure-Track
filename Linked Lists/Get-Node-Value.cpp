/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int len = 0; //to store length of linked list
    Node* traverse = head; //pointer to store immmediate address of node
    while(traverse != NULL){
        traverse = traverse->next; //moving till the end
        len++;
    }
    positionFromTail = len - positionFromTail; //this much position from starting
    int distFromHead = 1;
    traverse = head; //making the tail node head
    while(traverse != NULL){ //traversing new pft positions from head 
        if(positionFromTail == distFromHead)
            return traverse->data; //returning data from pft position
        traverse = traverse->next; //moving forward
        distFromHead++;
    }
    return distFromHead;
}
