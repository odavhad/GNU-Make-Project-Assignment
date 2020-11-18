#include <stdio.h>
#include "read_rec.h"
#include "display_rec.h"
#include "record_struct.h"

int main(void) {
    char filename[100] = "data.csv";
    struct record data = {.length = 0};

    // printf("Enter the filename: ");
    // scanf("%s", filename);
    readRec(filename, &data);
    displayRec(data);

    return 0;
}
