#include <stdio.h>
#include <string.h>
#include "sort_rec.h"
#include "record_struct.h"

void sortRec(struct record* data) {
    struct student temp1, temp2;
    
    for (int i = 0; i < data->length; i++) {
        for (int j = 0; j < data->length - 1; j++) {
            temp1 = data->array[j];
            temp2 = data->array[j + 1];

            if (strcmp(temp1.name, temp2.name) > 0) {
                data->array[j + 1] = temp1;
                data->array[j] = temp2;
            }
        }
    }
}
