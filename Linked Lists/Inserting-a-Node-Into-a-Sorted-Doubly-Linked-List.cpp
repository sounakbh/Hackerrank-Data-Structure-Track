/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = new_node->prev = NULL;
    Node* current;
    if(head == NULL)
        head = new_node;
    else if(head->data >= new_node->data){
        new_node->next = head;
        new_node->next->prev = new_node;
        head = new_node;
    }
    else{
        current = head;
        while(current->next != NULL && current->next->data < new_node->data)
            current = current->next;
        new_node->next = current->next;
        if(current->next != NULL)
            new_node->next->prev = new_node;
        current->next = new_node;
        new_node->prev = current;
    }
    return head;
}

