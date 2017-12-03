/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* fast_ptr = head;
    Node* slow_ptr = head;
    if(head != NULL){
        while(slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
            if(fast_ptr == slow_ptr){
                return 1;
            }
        }
    }
    return 0;
}

