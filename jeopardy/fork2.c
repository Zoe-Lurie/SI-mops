#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    int y = fork();
    int x;
    
    if( (x = fork()) == 0 ) return 0;

    x = fork();

    if( x == y ) printf("Hello there\n");

    return 0;
}



