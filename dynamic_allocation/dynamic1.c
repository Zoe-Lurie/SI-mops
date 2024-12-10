#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int * i = (int *) malloc( sizeof( int));

    *i = 10;

    printf("%d\n", *i);

    return 0;
}
