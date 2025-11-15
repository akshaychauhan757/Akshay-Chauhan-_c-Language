#include <stdio.h>
#define MAXSIZE 7

int main() {
    int pos, n, size, a[MAXSIZE], i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    size = n;

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    if(size >= MAXSIZE) {
        printf("Array is full\n");
        return 0;
    }

    printf("Enter the position to insert (1 to %d): ", size+1);
    scanf("%d", &pos);
    printf("Enter the number to insert: ");
    scanf("%d", &n);

    if(pos > size+1 || pos < 1) {
        printf("Invalid position");
    } else {
        for(i = size; i >= pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos - 1] = n;
        size++;
        printf("Array after insertion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}

