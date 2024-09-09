#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *caesarDecipher(char *code, int key) {

  for (int i = 0; code[i] != 0; i++) {
    if (code[i] == ' ')
      continue;
    else {
        code[i] += key;
        if ((code[i] > 'Z' && code[i] < 'a') || (code[i] > 'z'))
            code[i] -= 26;
    }
  }
  return code;
}

int main(void) {
  int key = 3;
  char *code = strdup("HERE IS A SIMPLE EXAMPLE");
  char *result = caesarDecipher(code, key);


  /*
  char result = 'r' + 1;
  char *code = strdup("HERE IS A SIMPLE EXAMPLE");
*/
  printf("%s\n", result);
  return 0;
}
