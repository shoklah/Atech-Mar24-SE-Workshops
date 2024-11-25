#include <stdio.h>

int lengthLastWord(char *str){
    int count = 0;
    int i = 0;

    for(; str[i] != '\0'; i++); // <==> i = strlen(str)
    for(; str[i] != ' '; i--){
        count++;
    }
    return count -1;
}

int main(){
    int count = lengthLastWord("this is a string");
    printf("The length of last word is %d\n", count);
}