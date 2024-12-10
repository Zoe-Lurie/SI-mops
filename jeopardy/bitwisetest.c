#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char a = 0b10001000;
    
    char b = 0b11110000;
    
    int x = ~a & (b ^ 19) || (a >> 7) << 2;
    
    printf("%d\n", x);
    
    return 0;
}



