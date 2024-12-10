#include <stdlib.h>
#include <stdio.h>

struct struct_one {
    char arr[3];
    char c1;
    char c2;
    char c3;
    int i1;
    short s;
    char c4;
    int i2;
};

int main() {
    printf("The size of struct_one is %lu\n", sizeof(struct struct_one));

    return 0;
}

