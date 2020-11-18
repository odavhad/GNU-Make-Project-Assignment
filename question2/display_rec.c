#include <stdio.h>
#include "display_rec.h"
#include "record_struct.h"

void displayRec(struct record data) {
    printf("No.\tAge\tName\n");

    for (int i = 0; i < data.length; i++) 
        printf("%d\t%d\t%s\n", i, 
        data.array[i].age, data.array[i].name);
}
