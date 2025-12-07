// wap to reverse the string check the string is palindrome
#include <stdio.h>
#include <string.h>
int main(){
    char str[100], rev[100];
    int len, i, flag = 0;
    printf("Enter any number: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len - 1] == '\n'){
        str[len - 1] = '\0';
        len--;
    }
    for(i=0; i<len; i++){
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
    if(strcmp(str, rev) == 0)
    printf("The string is a palindrome.\n");
    else
    printf("The string is not a palindrome.\n");
    return 0;
}