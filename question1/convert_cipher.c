#include <stdio.h>
#include <string.h>
#include "convert_cipher.h"

char _encrypt(char var) {
    if (var == 10) 
        return 32;
    else if (var == 32)
        return 10;
    else if (var > 32 && var <= 127) {
        if (var >= 123) 
            return var - 118;
        return var + 5;
    }
    
    return var;
}

void convertCipher(char textdata[1000], char* ciphertext) {
    for (int index = 0; index < strlen(textdata); index++)
        ciphertext[index] = _encrypt(textdata[index]);
}
