#include <stdio.h>
#define MAX 3

int cq[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if((front == 0 && rear == MAX-1) || (front == rear+1)) {
        printf("Overflow\n");
        return;
    }

    if(front == -1)
        front = rear = 0;
    else
        rear = (rear+1) % MAX;

    cq[rear] = val;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Rear = %d\n", cq[rear]);
    return 0;
}