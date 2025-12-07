// wap to print the character with count whose occurrence is more than 1
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Frequency array for ASCII characters
    int i;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    printf("Characters with occurrence > 1:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 1)
            printf("'%c' : %d times\n", i, freq[i]);
    }

    return 0;
}
