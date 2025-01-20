#include <stdio.h>


char my_cat(char *filename) {
    FILE *fptr = fopen(filename, "r");
    char c = ' ';

    c = fgetc(fptr);
    printf("%c", c);
    while (c != EOF) {
        c = fgetc(fptr);
        printf("%c", c);
    }

    fclose(fptr);
    return 0;
}


int main(int argc, char **argv) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
     my_cat(argv[i]);
    }
    return 0;
}