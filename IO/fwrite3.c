#include <stdio.h>
#include <stdlib.h>
int main() {
    int data[]  = {65,66,67,68,69};

    FILE *fp = NULL;

    fp = fopen("another_file.dat", "wb");
    if(fp == NULL) {
        printf("Error in creating the file\n");
        exit(1);
    }

    fwrite(data, sizeof(data),1, fp);

    fclose(fp);

    return 0;
}
