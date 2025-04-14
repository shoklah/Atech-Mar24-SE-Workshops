#include <stdio.h>
#include <string.h>

char *reverse_string(char *str, int str_len, int i) {
    char temp = str[i];
    int last_index = str_len - 1;

    str[i] = str[last_index - i];
    str[last_index - i] = temp;

    return str;
}

char* recursivereverse(char* str, int length, int i);

int main() {
    // char str_to_copy[18] = "This is a string"
    // char *str = malloc(18 * sizeof(*str));
    // for (int i = 0; i < 17; i++) {
    //     str[i] = str_to_copy[i];
    // }

    // char *str = strdup("This is a string.");
    //char *str = strdup("1234");
    //int str_len = strlen(str);

    //printf("gnirts a si sihT\n");
    //printf("starting : %s\n", str);
    //for(int i = 0; i < (str_len)/2; i++){
  //      printf("swapping %d : %s\n", i, reverse_string(str, str_len, i));
//    }


    // This is strdup
    // char *str = malloc(4 * sizeof(*str));
    // strcpy(str, "Arka");

    // char *str = strdup("Arka");
    char *str = strdup("This is a string.");
    int length = strlen(str);

    printf("%s\n", recursivereverse(str, length, 0));
    // recursivereverse("Arka", 4, 0);

    return 0;
}

char* recursivereverse(char* str, int length, int i){
    char temp = str[i];
    int last_index = length - 1;

    str[i] = str[last_index - i];
    str[last_index - i] = temp;
    
    if (length < 2 || i == length/2) {
        return str;
    } else {
        return recursivereverse(str, length, i++);
    }
}
