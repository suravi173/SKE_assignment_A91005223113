#include <stdio.h>

int stack[5] = {10,20,30};
int top = 2;

void display() {
    int i;
    for(i = top; i >= 0; i--)
        printf("%d ", stack[i]);
}

int main() {
    display();
    return 0;
}