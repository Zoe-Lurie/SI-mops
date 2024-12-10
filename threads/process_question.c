#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

int main(){
    
    printf("Hello there\n");

    int i = fork();

    if( i ){
        printf("Hello there\n");
        wait(NULL);
    }
    else{
        char * args[4];
        args[0] = "echo";
        args[1] = "Hello";
        args[2] = "there";
        args[3] = NULL;

        execvp( "echo", args );
    }


    exit(0);
}





