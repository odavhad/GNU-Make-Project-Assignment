#include <stdio.h>
#include "read_src.h"

void readSrc(const char filename[], char* filetext, int maxlength) {
    FILE* filepointer;
    char temp;
    int index = 0;

    filepointer = fopen(filename, "r");
    if (filepointer == NULL) {
        printf("Error opening the specified file.\n");
        return;
    }

    while (index < maxlength) {
        temp = fgetc(filepointer);
        
        if (feof(filepointer)) 
            break;
        
        filetext[index] = temp;
        index++;
    }
    fclose(filepointer);
}
