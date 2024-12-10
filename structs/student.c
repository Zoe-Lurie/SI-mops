#include <stdio.h>
#include <stdlib.h>


struct schedule{
    char * array;
};

struct student{
    char name[16];
    int age;
    struct schedule schedule;
};

typedef struct student student;

int main(){ 
    printf("%lu\n", sizeof(struct schedule));
    printf("%lu\n", sizeof(student));

    return 0;
}
