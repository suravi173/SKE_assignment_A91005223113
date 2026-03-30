#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int n=5, pos=2, i;

    for(i=pos; i<n-1; i++)
        arr[i] = arr[i+1];

    n--;

    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
