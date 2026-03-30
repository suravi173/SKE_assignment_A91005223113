#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
struct Node *front=NULL,*rear=NULL;
void enqueue(int v){
    struct Node* t=malloc(sizeof(struct Node));
    t->data=v; t->next=NULL;
    if(!rear){ front=rear=t; return;}
    rear->next=t; rear=t;
}
int main(){ enqueue(50); enqueue(60); printf("%d %d",front->data,rear->data); return 0; }