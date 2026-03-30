#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = top;
    top = temp;
}

int main() {
    push(10);
    push(20);

    printf("Top = %d\n", top->data);
    return 0;
}