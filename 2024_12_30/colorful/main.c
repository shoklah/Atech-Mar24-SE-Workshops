#include <stdio.h>
#include <stdbool.h>


int iscolorful(int number){
    int digits[3] = {0, 0, 0};
    int numDigits = 0;
    int i = 0;
    int ininum = number;
    
    while(number!=0){
        numDigits = numDigits + 1;
        number = number / 10;
    }
    number = ininum;
    while(number>0){
        digits[i] = number % 10;
        number = number/10;
        printf("%d\n",digits[i]);
        i++;
        numDigits++;
    }
}

int main(){
     iscolorful(263);
     
}
