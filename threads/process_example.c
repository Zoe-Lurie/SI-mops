#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    if( fork() == 0 )
        if( fork() )
            printf("Hello there\n");
    _exit(0);
}

