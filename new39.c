// wap to count vowels and consonants in given string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, v = 0, c = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        // Check if alphabet
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // Check for vowel
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
               str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);

    return 0;
}
