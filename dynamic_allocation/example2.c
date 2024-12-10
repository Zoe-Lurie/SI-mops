#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_WORDS 4

int main(){

    char * stack_words[] = {"Come", "to", "SI", "sessions"};

    char ** heap_words = (char **) malloc( NUM_WORDS * sizeof( char *));

    for( int i=0; i<NUM_WORDS; i++){
        strcpy( heap_words[i], stack_words[i]);
    }

    for( int i=0; i<NUM_WORDS; i++){
        printf("%s", heap_words[i]);
    }

    printf("\n");

    free( heap_words);

    return 0;
}


