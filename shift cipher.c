// A SHIFT CIPHER ENCRYPTION CODE.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *plaintext, int key) {

    char ch;
    int i = 0;

    while (plaintext[i] != '\0') {

        ch = plaintext[i];

        if(isupper(ch)) {
            ch = (ch + key - 'A') % 26 + 'A';
        }

        else if (islower(ch)) {
            ch = (ch + key - 'a') % 26 + 'a';
        }

        plaintext[i] = ch;
        i++;
    }
}

int main(void) {
    char plaintext[1000];
    printf("Enter your plaintext: ");
    scanf(" %[^\n]s", plaintext);

    int key;
    printf("Enter number of shifts: ");
    scanf("%d", &key);

    encrypt(plaintext, key);
    printf("Enrypted text is: %s\n", plaintext);

    return EXIT_SUCCESS;
}
