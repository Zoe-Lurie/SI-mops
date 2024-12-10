//copy_process_structure_example.c

#include <stdlib.h>
#include <stdio.h>

const char * message = "Total count:";
static int counter = 0;

void function( int a, int b){
    if( a > b) counter ++;

    static int num = 0;
    num += a;
    printf("%d\n", num);
}

int main( int argc, char * argv[]){

    for(int i=1; i<argc; i++){
        int num = strtol(argv[i], NULL, 10);

        function(num, 0);
    }

    printf("%s %d\n", message, counter);

    return 0;
}

