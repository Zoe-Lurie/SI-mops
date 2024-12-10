#include <stdio.h>
#include <stdlib.h>

void true_or_false(int expression){
    printf("%s\n", expression ? "True!" : "False!");
}

int main(void){
    int a = 10;
    int b = 15;

    int * ptr_a = &a;
    int * ptr_b = &b;
    int * ptr_c = ptr_a;
    
    int ** ptr_d = &ptr_c;

    true_or_false( a == b) ;
    true_or_false( ptr_a == ptr_b );
    true_or_false( ptr_b == b );
    true_or_false( *ptr_a == *ptr_c );
    true_or_false( **ptr_d == a );
    true_or_false( **ptr_d == b );
    true_or_false( ptr_b == &b );


    return EXIT_SUCCESS;
}
