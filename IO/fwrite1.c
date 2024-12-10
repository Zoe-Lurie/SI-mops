#include <stdio.h>

int main() {
    char *filename = "numbers.dat";

    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error opening the file %s", filename);
        return -1;
    }

    for (int i = 0; i < 10; i++) {
        fwrite(&i, sizeof(int), 1, fp);
    }

    fclose(fp);

    return 0;
}
