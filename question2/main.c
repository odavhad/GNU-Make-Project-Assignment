#include <stdio.h>
#include <string.h>
#include "read_rec.h"
#include "sort_rec.h"
#include "display_rec.h"
#include "record_struct.h"

int main(void) {
    char filename[100];
    int status;
    struct record data = {.length = 0};

    printf("Enter the filename: ");
    scanf("%s", filename);
    status = readRec(filename, &data);
    if (status == 0) {
        return 0;
    }
    
    printf("Student records:\n");
    displayRec(data);
    
    sortRec(&data);
    
    printf("\n\nSorted student records:\n");
    displayRec(data);

    return 0;
}
