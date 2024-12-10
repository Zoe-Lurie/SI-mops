#include <stdio.h>

int main() {
   char str[] = "Hello World";

   FILE * filePointer = fopen("test.txt", "w");

   fwrite(str, 1, sizeof(str) - 1, filePointer);

   fclose(filePointer);

   return 0;
}
