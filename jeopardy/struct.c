#include <stdio.h>
#include <stdlib.h>

union type{
    int i;
    long o;
    char c;
    float f;
};

typedef struct data{
    char * name;
    char letter;
    struct data * more_data;
    union type type;
    float num;
} * Data;

int main(){
    Data example;
    printf("%lu %lu %lu\n", sizeof(example), sizeof(struct data), sizeof(*example));
    return 0;
}
