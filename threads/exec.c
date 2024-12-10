#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    if( fork() == 0){
        char * exec_args[3];
        exec_args[0] = "cat";
        exec_args[1] = "exec.c";
        exec_args[2] = NULL;

        execvp( "cat", exec_args );
    }

    else{
        char * exec_more_args[3];
        exec_more_args[0] = "ls";
        exec_more_args[1] = "-a";
        exec_more_args[2] = NULL;

        wait(NULL);

        execvp( "ls", exec_more_args );
    }

    return 0;
}
