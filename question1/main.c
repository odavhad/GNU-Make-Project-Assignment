#include <stdio.h>
#include "read_src.h"
#include "convert_cipher.h"
#include "display_cipher.h"

#define MAX_LENGTH  1000
#define OFFSET      5

int main(void) {
    char filename[100], filetext[MAX_LENGTH], ciphertext[MAX_LENGTH];

    printf("Enter the filename: ");
    scanf("%s", filename);

    readSrc(filename, &filetext, MAX_LENGTH);
    printf("File Data:\n%s\n", filetext);

    convertCipher(filetext, &ciphertext, OFFSET);
    printf("\nCipher Text:\n%s\n", ciphertext);
    
    printf("\nDecrypted Text:\n");
    displayCipher(ciphertext, MAX_LENGTH, OFFSET);

    return 0;
} 
