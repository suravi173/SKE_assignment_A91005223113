#include <stdio.h>
void maxHeap(int a[],int n,int i){
    int largest=i,l=2*i+1,r=2*i+2;
    if(l<n && a[l]>a[largest]) largest=l;
    if(r<n && a[r]>a[largest]) largest=r;
    if(largest!=i){
        int t=a[i]; a[i]=a[largest]; a[largest]=t;
        maxHeap(a,n,largest);
    }
}
int main(){
    int a[]={3,9,2,1,4,5},n=6;
    for(int i=n/2-1;i>=0;i--) maxHeap(a,n,i);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}