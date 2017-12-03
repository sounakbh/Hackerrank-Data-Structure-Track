/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    while(headA != NULL && headB != NULL){ //while elements are still left in the list
        if(headA->data != headB->data) //if both data are not identical
            return 0;
        headA = headA->next; //update headA
        headB = headB->next; //update headB
    }
    if(headA == NULL && headB == NULL) //checking to see if the length of both the lists are equal or not i.e after after traversing                                          //the whole list both of them should point to NULL
        return 1;
    else
        return 0;
}

