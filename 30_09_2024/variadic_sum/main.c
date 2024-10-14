#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...){
    int total_sum = 0;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        total_sum += va_arg(args, int);
    }

    va_end(args);
    return total_sum;
}

int main(){
    printf("Sum: %d\n", sum(8, 1,2,3,7,8));
    return 0;
}