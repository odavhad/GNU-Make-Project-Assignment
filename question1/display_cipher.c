#include <stdio.h>
#include <string.h>
#include "display_cipher.h"

void displayCipher(char ciphertext[1000], int maxlength, int offset) {
    int length = strlen(ciphertext);
    char decryptedtext[maxlength], temp;

    for (int index = 0; index < length; index++) {
        temp = ciphertext[index];
        
        if (temp != 0)
            decryptedtext[index] = (temp - offset) % 128;
    }

    printf("%s\n", decryptedtext);
}
