#include <stdio.h>
#include "read_src.h"
#include "convert_cipher.h"
#include "display_cipher.h"

#define MAX_LENGTH  1000

int main(int argc, char* argv[]) {
    char filename[100], filetext[MAX_LENGTH], ciphertext[MAX_LENGTH];
    int status;

    if (argc != 2) {
        printf("Invalid input format.\n");
        printf("Enter the input in following format:\n");
        printf("%s filename.txt\n", argv[0]);
        return -1;
    } 
    strcpy(filename, argv[1]);

    status = readSrc(filename, &filetext, MAX_LENGTH);
    if (status == -1) 
        return -1;
    
    printf("File Data:\n%s\n", filetext);

    convertCipher(filetext, &ciphertext);
    printf("\nCipher Text:\n%s\n", ciphertext);
    
    printf("\nDecrypted Text:\n");
    displayCipher(ciphertext, MAX_LENGTH);

    return 0;
} 
