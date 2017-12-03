/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    if(head == NULL) //base case
        return; //we reached end of the list
    ReversePrint(head->next); //recursive call to print next element int he list
    cout << head->data << endl; //print the element in the list
    return;
}
