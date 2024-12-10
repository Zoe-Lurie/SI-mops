#include <stdio.h>
#include <stdlib.h>

int main(void){

    char arr[] = { 'a', 'b', 'c', 'd', 'e' };
    char * ptr1 = arr;

    printf("%c\n", arr[0]);
    printf("%c\n", ptr1[0]);
    //printf("%c\n", *ptr1[0]);
    printf("%c\n", ptr1[1]);
    printf("%c\n", *(ptr1 + 1));
    printf("%c\n", ptr1[5]);
    printf("%c\n", arr[-1]);
    printf("%c\n", ptr1[-1]);


    return EXIT_SUCCESS;
}
