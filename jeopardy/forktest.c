#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    int a = fork();

    printf("%d\n", a);
    fflush(stdout);

    if( a ){
        fork();
        printf("a\n");
        fflush(stdout);
    }

    else{
        fork();
        printf("b\n");
        fflush(stdout);
    }

    fork();
    printf("c\n");
    fflush(stdout);

    return 0;
}


