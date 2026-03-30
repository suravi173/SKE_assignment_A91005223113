#include <stdio.h>

int queue[5] = {10,20,30};
int front = 0, rear = 2;

void dequeue() {
    if(front > rear)
        printf("Underflow\n");
    else
        printf("Deleted = %d\n", queue[front++]);
}

int main() {
    dequeue();
    return 0;
}