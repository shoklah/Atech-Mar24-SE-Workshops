#include <stdio.h>

int reversenum(int num){
    int reverse = 0;
        while(num!=0){
        reverse = (reverse*10) + (num%10);
        num = num/10;
    }
    if(num<231 && num> -231){
        return reverse;
    }
    else{
    return 0;
}
}


int main(){
   printf("%d\n",reversenum(-123));
   return 0;
}