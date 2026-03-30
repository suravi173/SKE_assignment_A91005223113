#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

int main() {
    front = rear = 0;
    queue[rear] = 10;

    printf("Front = %d\n", queue[front]);
    return 0;
}