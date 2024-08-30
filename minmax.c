#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void findMinMax(struct Node* head, int* min, int* max) {
    if (head == NULL)
        return;

    *min = *max = head->data;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->data < *min)
            *min = current->data;
        if (current->data > *max)
            *max = current->data;
        current = current->next;
    }
}

int main() {
    struct Node* head = createNode(3);
    head->next = createNode(1);
    head->next->next = createNode(7);
    head->next->next->next = createNode(5);

    int min, max;
    findMinMax(head, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
