#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    char * args[7];
    args[0] = "echo";
    args[1] = "SI";
    args[2] = "is";
    args[3] = "awesome!";
    args[4] = 0;
    args[5] = "pwd";
    args[6] = NULL;

    execvp("echo", args);
    printf("hello there\n");

    return 0;
}



