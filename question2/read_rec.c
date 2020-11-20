#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "record_struct.h"
#include "read_rec.h"

int readRec(const char filename[], struct record* data) {
    FILE* filepointer;
    char filetext[10000], temp, filedata[200][100];
    int index = 0, tempIndex, length;
    struct student tempStudent;

    filepointer = fopen(filename, "r");
    if (filepointer == NULL) {
        printf("Error opening the specified file.\n");
        return -1;
    }

    while (1) {
        temp = fgetc(filepointer);
        
        if (feof(filepointer)) 
            break;
        
        filetext[index] = temp;
        index++;
    }
    fclose(filepointer);
    
    length = index;
    index = 0;
    tempIndex = 0;
    for (int i = 0; i < length; i++) {
        if (filetext[i] == 44) {
            index++;
            tempIndex = 0;
        } else if (filetext[i] != 32 && filetext[i] != 10) {
            filedata[index][tempIndex] = filetext[i];
            tempIndex++;   
        }
    }

    length = index;
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            strcpy(tempStudent.name, filedata[i]);
        } else {
            tempStudent.age = atoi(filedata[i]);
            data->array[data->length] = tempStudent;
            data->length++;
        }
    }

    return 1;
}
