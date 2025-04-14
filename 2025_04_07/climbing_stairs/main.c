#include <stdio.h>

int ways_to_reach_the_top (int steps) {
    if (steps <= 0) {
        return 0;
    } else if (steps == 1) {
        return 1;
    } else if (steps == 2) {
        return 2;
    }

    return ways_to_reach_the_top(steps -1) + ways_to_reach_the_top(steps - 2);
}

int main() {
    printf("%d\n", ways_to_reach_the_top(70));

    return 0;
}