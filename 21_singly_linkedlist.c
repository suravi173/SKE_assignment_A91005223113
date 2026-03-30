#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = NULL;

    printf("Head = %d\n", head->data);
    return 0;
}