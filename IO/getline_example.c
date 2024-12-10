#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>

#define FILENAME "example.txt"

int main(void) {

    char * line_buf = NULL;
    size_t line_buf_size = 0;
    int line_count = 0;
    ssize_t line_size;

    FILE *fp = fopen(FILENAME, "r");
    if (!fp) {
        fprintf(stderr, "Error opening file '%s'\n", FILENAME);
        return EXIT_FAILURE;
    }

    line_size = getline(&line_buf, &line_buf_size, fp);

    while (line_size >= 0) {
        line_count++;

        printf("line[%d]: chars=%d, buf size=%u, contents: %s", line_count,
                line_size, line_buf_size, line_buf);

        line_size = getline(&line_buf, &line_buf_size, fp);
    }

    free(line_buf);

    fclose(fp);

    return EXIT_SUCCESS;
}
