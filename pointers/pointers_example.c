// pointers_example.c

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



int main( void ){

    int a = 10;
    int b = 15;
    int * ptr_a = &a;
    int * ptr_b = &b;
    int * ptr_c = ptr_a;
    
    // a == b
    // ptr_a == ptr_b
    // *ptr_b = b
    // *ptr_a = *ptr_c
    // ptr_a == ptr_c
    // ptr_b == &b

    return 0;
}
