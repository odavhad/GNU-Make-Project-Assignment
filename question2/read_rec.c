#include <stdio.h>
#include <stdlib.h>
// #include "record_struct.h"
#include "read_rec.h"

// void readRec(const char filename[], struct record* data) {
//     FILE* filepointer;
//     char filetext[100];

//     filepointer = fopen(filename, "r");
//     if (filepointer == NULL) {
//         perror("Error");
//         return;
//     }

//     fclose(filepointer);

//     data->length = 1;
// }

void readRec(const char filename[]) {
    FILE* filepointer;
    char filetext[100], temp;
    int index = 0;

    filepointer = fopen(filename, "r");
    if (filepointer == NULL) {
        printf("Error opening the specified file.\n");
        return;
    }

    while (1) {
        temp = fgetc(filepointer);
        
        if (feof(filepointer)) 
            break;
        
        filetext[index] = temp;
        index++;
    }

    fclose(filepointer);

    printf("%s\n", filetext);
}
