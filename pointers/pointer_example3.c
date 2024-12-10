#include <stdio.h>
#include <stdlib.h>

int main(void){
    char arr[] = { 'a', 'b', 'c', 'd', 'e' };
    char * ptr2 = arr;

    for( int i = 0; i < 5; i++ ) {
        *ptr2 += i;
        ptr2 ++;
    }

    for(int i=0; i<5; i++){
        printf("%c\n", arr[i]);
    }

    return 0;
}
