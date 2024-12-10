#include <stdlib.h>
#include <stdio.h>

struct struct_ex {
    int i;
    char c;
    float * f;
    void * v;
    short s;
};

typedef struct struct_ex ex;

typedef struct struct_ex * ex_ptr;

int main(void) {
    printf("The size of struct_ex is %lu\n", sizeof(struct struct_ex));
    printf("The size of ex is %lu\n", sizeof(ex));
    printf("The size of ex_ptr is %lu\n", sizeof(ex_ptr));
    return 0;
}

