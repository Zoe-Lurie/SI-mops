#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <header.h> //local header file

#define MAX_STRING_LENGTH = 10

int main( int argc, char * argv[]){

    for(int i=0; i<argc; i++){
        char string[10] = argv[i];

        reverse_string(string); //strrev is defined in header.h: reverses the given string, storing it in the same string

        short boolean = 0;

        for(int j=0; j<sizeof(string); j++){
            if( string[j] != argv[i][j]) {
                printf("%s is not a palindrome!", argv[i]);
                boolean = 1;
                break;
            }
        }

        if(!boolean) printf("%s is a palindrome!");
    }

    return EXIT_SUCCESS;
}





