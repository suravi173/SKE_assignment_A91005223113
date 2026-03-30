#include <stdio.h>
void minHeap(int a[],int n,int i){
    int s=i,l=2*i+1,r=2*i+2;
    if(l<n && a[l]<a[s]) s=l;
    if(r<n && a[r]<a[s]) s=r;
    if(s!=i){
        int t=a[i]; a[i]=a[s]; a[s]=t;
        minHeap(a,n,s);
    }
}
int main(){
    int a[]={3,9,2,1,4,5},n=6;
    for(int i=n/2-1;i>=0;i--) minHeap(a,n,i);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}