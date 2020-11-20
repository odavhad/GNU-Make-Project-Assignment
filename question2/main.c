#include <stdio.h>
#include <string.h>
#include "read_rec.h"
#include "sort_rec.h"
#include "display_rec.h"
#include "record_struct.h"

int main(int argc, char* argv[]) {
    char filename[100];
    int status;
    struct record data = {.length = 0};

    if (argc != 2) {
        printf("Invalid input format.\n");
        printf("Enter the input in following format:\n");
        printf("%s filename.txt\n", argv[0]);
        return -1;
    } 
    strcpy(filename, argv[1]);

    // printf("Enter the filename: ");
    // scanf("%s", filename);
    status = readRec(filename, &data);
    if (status == -1) {
        return -1;
    }
    
    printf("Student records:\n");
    displayRec(data);
    
    sortRec(&data);
    
    printf("\n\nSorted student records:\n");
    displayRec(data);

    return 0;
}
