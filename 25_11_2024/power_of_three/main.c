#include <stdio.h>
int isPowerOfThree(int n){
    int i = 3;
    while(i < n){
        i = i * 3;
    }

    if(i == n){return 1;}
    return 0;
}

int main(){
    printf("%d\n", isPowerOfThree(21));
}