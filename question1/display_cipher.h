#include <stdio.h>

#ifndef DISPLAY_CIPHER_H
#define DISPLAY_CIPHER_H

/*
 * _decrypt()
 * ----------
 * Helper function for displayCipher().
 * 
 * var      : the character that must be derypted
 * 
 * returns  : the derypted character code of given character 
 */ 
char _decrypt(char var);

/*
 * displayCipher()
 * ---------------
 * Decrypts the cipher text and prints the decrypted text on the screen.
 * 
 * ciphertext   : the cipher text which is supposed to be decrypted and
 *                displayed. 
 * maxlength    : the maximum length of the cipher text
 */
void displayCipher(char ciphertext[1000], int maxlength);

#endif
