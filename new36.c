// count the given string without using inbuilt fn()
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int count = 0, i = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        count++;
        i++;
    }
    printf("Length of the string is: %d", count);
    return 0;
}