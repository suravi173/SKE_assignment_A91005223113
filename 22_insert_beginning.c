#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
struct Node* head=NULL;
void insert(int v){
    struct Node* t=malloc(sizeof(struct Node));
    t->data=v; t->next=head; head=t;
}
int main(){
    insert(20); insert(10);
    printf("%d %d", head->data, head->next->data);
    return 0;
}