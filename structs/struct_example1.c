#include <stdlib.h>
#include <stdio.h>

struct struct_one {
    char a;
    long x;
};

struct struct_two {
    char name[10];
    int y;
};

int main(void) {
    printf("The size of struct_one is %lu\n", sizeof(struct struct_one));
    printf("The size of struct_two is %lu\n", sizeof(struct struct_two));

    return 0;
}

