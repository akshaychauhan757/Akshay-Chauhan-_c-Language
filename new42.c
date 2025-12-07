// Memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int * ptr;
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    ptr = malloc(n * sizeof(int));
    if(ptr == NULL){
        printf("insufficients Memory");
    }
    return 1;
    printf("Enter elements of n: ");
    for(i = 0; i<n; i++){
        scanf("%d", ptr + i);
    }
    free(ptr);
    return 0;
}