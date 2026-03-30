#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* l,*r;};

struct Node* search(struct Node* root,int key){
    if(!root || root->data==key) return root;
    if(key<root->data) return search(root->l,key);
    return search(root->r,key);
}

int main(){
    struct Node* root=malloc(sizeof(struct Node));
    root->data=50; root->l=root->r=NULL;

    if(search(root,50)) printf("Found");
    return 0;
}