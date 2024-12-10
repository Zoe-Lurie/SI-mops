#include <stdio.h>

#define A
#define B
#define C

int main() {
    #ifdef A
        printf("Hello\n");
        #ifndef B
            printf("World\n");
        #endif
        printf("Another\n");
        #ifdef C
            printf("Example\n");
        #endif
    #endif
    return 0;
}
