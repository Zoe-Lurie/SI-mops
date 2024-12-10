#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float * f = (float *) malloc( sizeof (float));

    *f = 5.7;

    printf("%f\n", *f);

    float num = 10;

    f = &num;

    printf("%f\n", *f);

    free( f);

    return 0;
}
