#include <stdlib.h>
#include <stdio.h>

int main( void ){
    int x;
    x = 5, 10;
    printf("x: %d\n", x);

    x = (5, 10);
    printf("x: %d\n\n", x);

    int y;
    y = --x, --x;
    printf("y: %d\n", y);
    printf("x: %d\n\n", x);

    y = (x++, x++);
    printf("y: %d\n", y);
    printf("x: %d\n\n", x);

    for(int i=0, j=10; i<j; i++, j--){
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}
