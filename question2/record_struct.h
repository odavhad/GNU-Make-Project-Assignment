#ifndef RECORD_STRUCT_H
#define RECORD_STRUCT_H

typedef struct student {
    char    name[100];
    int     age;
};

typedef struct record {
    struct student  array[100];
    int             length;
};

#endif
