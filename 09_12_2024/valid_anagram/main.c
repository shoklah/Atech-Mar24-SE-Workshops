#include "stdio.h"

int is_character_in_the_string(char *s, char c) {
    int i = 0;
    for(i=0; s[i] != '\0'; i++){
        if(s[i]== c){
            return 1;
        }
    }
    return 0;
}

char anagram(char* s, char* t){
    int i = 0;
    for(i=0; t[i] != '\0'; i++)
    {
        if(is_character_in_the_string(s, t[i])){
            return 1;
        }
    }
    return 15;
}



int main(){
    printf("%d\n", anagram("anagram", "nagaram"));
    return 0;
}




