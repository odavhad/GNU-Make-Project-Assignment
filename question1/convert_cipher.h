#include <stdio.h>

#ifndef CONVERT_CIPHER_H
#define CONVERT_CIPHER_H

/*
 * convertCipher()
 * ---------
 * Encrypts the text data into cipher text.
 * 
 * textdata     : the text data which is supposed to be ecrypted
 * ciphertext   : the variable where cipher text is supposed to be 
 *                stored 
 * offset       : offset value for the cipher text
 */
void convertCipher(char textdata[1000], char* ciphertext, int offset);

#endif
