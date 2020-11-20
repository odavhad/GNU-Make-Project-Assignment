#include <stdio.h>

#ifndef CONVERT_CIPHER_H
#define CONVERT_CIPHER_H

/*
 * _encrypt()
 * ----------
 * Helper function for convertCipher().
 * 
 * var      : the character that must be ecrypted
 * 
 * returns  : the ecrypted character code of given character 
 */ 
char _encrypt(char var);

/*
 * convertCipher()
 * ---------------
 * Converts the given text data into cipher text.
 * 
 * textdata     : the text data which is supposed to be ecrypted
 * ciphertext   : the variable where cipher text is supposed to be 
 *                stored 
 */
void convertCipher(char textdata[1000], char* ciphertext);

#endif
