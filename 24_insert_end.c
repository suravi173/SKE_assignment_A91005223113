#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
struct Node* head=NULL;
void del(){
    if(head){
        struct Node* t=head;
        head=head->next;
        printf("%d", t->data);
        free(t);
    }
}
int main(){
    head=malloc(sizeof(struct Node));
    head->data=100; head->next=NULL;
    del();
    return 0;
}