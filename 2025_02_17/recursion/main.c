#include <stdio.h>

int recursive_power(int base, int power) {
    if (power <= 0)
        return 1;
    else
        return base * recursive_power(base, power - 1);
}

int main() {
    int base = 2;
    int power = 4;

    printf("%d\n", recursive_power(base, power));
}