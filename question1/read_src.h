#include <stdio.h>

#ifndef READ_SRC_H
#define READ_SRC_H

/*
 * readSrc()
 * ---------
 * Reads the data from a textfile and returns it.
 * 
 * filename : the name of the text file containing student records
 * filetext : the variable to store the data read from text file
 * maxlength    : the maximum length of the cipher text
 * 
 * returns  : returns whether the read operation was successful
 */
int readSrc(const char filename[], char* filetext, int maxlength);

#endif
