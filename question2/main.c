#include <stdio.h>
#include <string.h>
#include "read_rec.h"
#include "sort_rec.h"
#include "display_rec.h"
#include "record_struct.h"

int main(void) {
    char filename[100];
    struct record data = {.length = 0};

    printf("Enter the filename: ");
    scanf("%s", filename);
    readRec(filename, &data);
    
    printf("Student records:\n");
    displayRec(data);
    
    sortRec(&data);
    
    printf("\n\nSorted student records:\n");
    displayRec(data);

    return 0;
}
