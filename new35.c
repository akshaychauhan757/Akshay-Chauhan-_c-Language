// count the given string using inbuilt fn()
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    int n = strlen(str);
    int count = 0;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++){
        count++;
    }
    printf("The size of string: %d", count - 1);
    return 0;
}