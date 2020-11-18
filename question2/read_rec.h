#include <stdio.h>
// #include "record_struct.h"

#ifndef READ_REC_H
#define READ_REC_H

/* 
 * readRec()
 * -------------------
 * Reads the student data from a text file and returns it. 
 * The student data(name and age) is assumed to be stored in csv 
 * format.
 * 
 * filename: the name of the text file containing student records
 * data    : the variable to store the records read from text file
 */
void readRec(const char filename[], struct record* data);

#endif
