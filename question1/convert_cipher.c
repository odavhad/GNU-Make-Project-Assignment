#include <stdio.h>
#include <string.h>
#include "convert_cipher.h"

void convertCipher(char textdata[1000], char* ciphertext, int offset) {
    int length = strlen(textdata), index;
    char temp;

    for (index = 0; index < length; index++) {
        temp = textdata[index];
        
        if (temp != 0)
            ciphertext[index] = (temp + offset) % 128;
    }
}
