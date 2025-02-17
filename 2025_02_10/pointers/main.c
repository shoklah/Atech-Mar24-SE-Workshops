#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamic_array = malloc(4 * sizeof(int));
    int static_array[4] = {2, 3, 4, 6};

    dynamic_array[0] = 2;
    // dynamic_array[1] = 3;
    // dynamic_array[2] = 4;
    dynamic_array[3] = 6;
    for (int i = 0; i < 4; i++)
        printf("%d\n", dynamic_array[i]);

    free(dynamic_array);
}