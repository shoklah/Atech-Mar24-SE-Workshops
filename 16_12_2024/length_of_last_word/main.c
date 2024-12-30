#include <stdio.h>

int lengthlastword(char *str){
    int i = 0;
    int j;
    while (str[i] != '\0'){i++;}
    while(i){
        i--;
        j++;
        if(str[i] == ' '){
            return j - 1;
        }
    }
    return 0;
}

int main()
{
    printf("%d\n", lengthlastword("Hello World!"));

    return 0;
}






