#include <stdio.h>
#include <stdlib.h>

char * char_ptr;


int main(void){

    char c = 'c';
    char d = c + 1;

    char_ptr += &c;
    (*(char_ptr+1)) += 1;

    printf("%c%c", --c, d++);
    return 0;

}
