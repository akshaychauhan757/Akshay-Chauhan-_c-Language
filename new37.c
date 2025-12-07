// wap to convert string from upper case to lower case and vice versa using inbuilt fn()
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] !='\0'; i++){
        if(islower (str[i]))
        str[i] = toupper(str[i]);
        else if (isupper (str[i]))
        str[i] = tolower(str[i]);
    }
    printf("Case changed string: %s", str);
    return 0;
}
