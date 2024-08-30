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

void findSumAndAverage(struct Node* head, int* sum, float* average) {
    int count = 0;
    *sum = 0;

    struct Node* current = head;
    while (current != NULL) {
        *sum += current->data;
        count++;
        current = current->next;
    }

    if (count > 0)
        *average = (float)(*sum) / count;
    else
        *average = 0.0;
}

int main() {
    struct Node* head = createNode(4);
    head->next = createNode(6);
    head->next->next = createNode(8);
    head->next->next->next = createNode(10);

    int sum;
    float average;
    findSumAndAverage(head, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
