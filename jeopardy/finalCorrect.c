#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h" //double quotes for header files

#define MAX_STRING_LENGTH 10 //no equals sign for defines

int main( int argc, char * argv[]){

    for(int i=1; i<argc; i++){ //argv starts at 1
        char string[MAX_STRING_LENGTH + 1]; //needs 1 extra byte for nul terminator
        strncpy(string, argv[i], MAX_STRING_LENGTH); //need strcpy

        reverse_string(string);

        short boolean = 0;

        for(int j=0; j<strlen(string); j++){ //strlen instead of sizeof
            if( string[j] != argv[i][j]) {
                printf("%s is not a palindrome!", argv[i]);
                boolean = 1;
                break;
            }
        }

        if(!boolean) printf("%s is a palindrome!", argv[i]); //pass the word as an argument
    }

    return EXIT_SUCCESS;
}




