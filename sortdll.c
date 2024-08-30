void sortDoublyLinkedList(struct Node** head_ref) {
    struct Node* i, *j;
    int temp;

    for (i = *head_ref; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}
