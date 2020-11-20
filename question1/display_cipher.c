#include <stdio.h>
#include <string.h>
#include "display_cipher.h"

char _decrypt(char var) {
    if (var == 10) 
        return 32;
    else if (var == 32)
        return 10;
    else if (var > 32 && var <= 127) {
        if (var <= 36) 
            return var + 118;
        return var - 5;
    }
    
    return var;
}

void displayCipher(char ciphertext[1000], int maxlength) {
    char decryptedtext[maxlength];

    for (int index = 0; index < strlen(ciphertext); index++)
        decryptedtext[index] = _decrypt(ciphertext[index]);

    printf("%s\n", decryptedtext);        
}
