// string in array to string shoolini
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    puts(str);
    return 0;
}