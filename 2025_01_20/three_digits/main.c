#include <stdio.h>
#include <stdlib.h>

// ./a.out 334 56 324
// char **argv = {"./a.out", "334", "56", "324"};



int threeintegers(int a, int b, int c){
    if((a>b && b>c)||(c>b && b>a)){
        return b;
    }else if((a>c && c>b) || (b>c && c>a)){
        return c;
    } else if ((b>a && a>c) || (a>b && c>a)){
        return a;
    }else{
        printf("invalid response\n");
    }
    return 0;
}

int main(int argc, char **argv){
    if (argc != 4) {
        printf("Invalid usage\n");
        return -1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    printf("%d\n", threeintegers( a, b, c));
    
//    printf("Should be 2: %d\n",threeintegers(1,2,3));
//    printf("Should be 2: %d\n",threeintegers(3,2,1));
//    printf("Should be 2: %d\n",threeintegers(2,1,3));
//    printf("Should be 2: %d\n",threeintegers(2,3,1));
//    printf("Should be 2: %d\n",threeintegers(1,3,2));
//    printf("Should be 2: %d\n",threeintegers(3,1,2));
   return 0;
}