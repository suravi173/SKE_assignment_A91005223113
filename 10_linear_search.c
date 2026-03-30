#include <stdio.h>

int main() {
    int arr[5], i, key, found=0;

    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0; i<5; i++) {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Not found\n");

    return 0;
}