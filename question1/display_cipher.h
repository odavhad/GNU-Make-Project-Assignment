#include <stdio.h>

#ifndef DISPLAY_CIPHER_H
#define DISPLAY_CIPHER_H

/*
 * displayCipher()
 * ---------
 * Decrypts the cipher text and prints the decrypted text on the screen.
 * 
 * ciphertext   : the cipher text which is supposed to be decrypted and
 *                displayed. 
 * maxlength    : the maximum length of the cipher text
 * offet        : offset value for the cipher text
 */
void displayCipher(char ciphertext[1000], int maxlength, int offset);

#endif
