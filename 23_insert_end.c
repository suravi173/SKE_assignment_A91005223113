#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
struct Node* head=NULL;
void insert(int v){
    struct Node* t=malloc(sizeof(struct Node));
    t->data=v; t->next=NULL;
    if(head==NULL){head=t; return;}
    struct Node* p=head;
    while(p->next!=NULL) p=p->next;
    p->next=t;
}
int main(){
    insert(10); insert(20);
    printf("%d", head->next->data);
    return 0;
}