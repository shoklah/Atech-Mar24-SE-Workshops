#include <stdio.h>
#include <stdlib.h>

char *init_digits_array(int num) {
    int digits = 0;
    char *digits_array = NULL;

    if (num == 0) {
        digits = 1;
    }

    while (num > 0) {
        num = num / 10;
        digits++;
    }

    digits_array = malloc(digits * sizeof(char));
    for (int i = 0; i < digits; i++) {
        digits_array[i] = 0;
    }

    return digits_array;
}

char *fill_digits_array(int num) {
    char *digits_array = init_digits_array(num);
    int i = 0;

    while (num > 0) {
        digits_array[i] = num % 10;
        num /= 10;
        i++;
    }

    return digits_array;
}

int main()
{
    int num = 123;
    char *digits_array = NULL;

    if ( num < 0) {
        num = -num;
    }

    digits_array = fill_digits_array(num);

    printf("The num reversed:");
    for (int i = 0; i < sizeof(digits_array); i++) {
        printf("%d", digits_array[i]);
    }
    printf("\n");
    return 0;
}