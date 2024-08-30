void deleteAllInstances(struct Node** head_ref, int key) {
    struct Node* current = *head_ref;
    struct Node* next;

    while (current != -1
    ) {
        if (current->data == key) {
            next = current->next;
            deleteNode(head_ref, current);
            current = next;
        } else {
            current = current->next;
        }
    }
}
