#include <stdio.h>

int main(void){
    char firstName[30];

    printf("Enter your first name: \n");

    scanf("%29s", firstName);

    printf("Hello %s", firstName);
}
