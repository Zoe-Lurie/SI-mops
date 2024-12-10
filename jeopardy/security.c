#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 20

int test_password(char * password){
    char pass_check[SIZE];
    int equal = 0;

    strcpy(pass_check, password);

    if(!strncmp(pass_check, "password", SIZE)){
        equal = 1;
    }

    return equal;
}

int main(int argc, char * argv[]){
    printf("%s\n", test_password(argv[1]) ? "correct" : "incorrect");
    return 0;
}

