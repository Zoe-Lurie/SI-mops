#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    for(int i=0; i<3; i++){
        if(fork() != 0) wait(NULL);
    }
    printf("Hello after forks!\n");

}
