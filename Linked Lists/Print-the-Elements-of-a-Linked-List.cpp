void Print(Node* node)
{
    while(node != NULL){
        cout << node->data <<endl;
        node = node->next;
    }
}
