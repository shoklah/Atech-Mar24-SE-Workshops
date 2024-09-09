#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Instructions https://docs.google.com/document/d/1R2MjZyO1_xFM9-PN4hq58uBSQ-zzxhn5Q7-Xu-8vseE/edit

// adds "ma" to the end of a string
char *addMa(char *word)
{
    char firstChar = word[0];
    int size = 0;
    char ending[3] = "ma";
    while (word[size] != '\0')
    {
        size++;
    }
    char *result = malloc((size + 3) * sizeof(*result));
    for (int index = 0; index < size; index++)
    {
        result[index] = word[index];
    }
    int innerIndex = 0;
    for (int index = size; index < size + 3; index++)
    {
        result[index] = ending[innerIndex];
        innerIndex++;
    }
    return result;
}
char *appendLast(char *word)
{
    char firstChar = word[0];
    int indexPlus = 1;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (i == strlen(word) - 1)
        {
            word[i] = firstChar;
        }
        else
        {
            word[i] = word[indexPlus];
            indexPlus++;
        }
    }
    return word;
}

// char *addAs(char *word, int index) {
//     int wordLength = strlen(word)
//     int newLength =  wordLength + index;
//     char *newWord = (char *)malloc(sizeof(char *) * newLength);
//     strcpy(newWord, word)
//     for (i = wordLength - 1; i < newLength; i++) {
//         newWord[i] = 'a';
//     }
//     newWord[newLength] + '\0';
//     return newWord;
// }

char **splitSentence(char *sentence)
{
    int spaces = 0;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            spaces++;
        }
    }
    int words = spaces + 1;
    char **array = (char **)malloc(sizeof(char *) * spaces);
    int outIndex = 0;
    int charIndex = 0;
    for (int i = 0; i <= strlen(sentence); i++)
    {
        if (sentence[i] == ' ' || i == strlen(sentence))
        {
            int wordLength = i - charIndex;
            char *word = (char *)malloc(sizeof(char *) * wordLength);
            int wordIndex = 0;
            for (int j = charIndex; j < i; j++)
            {
                word[wordIndex] = sentence[j];
                wordIndex++;
            }
            word[wordIndex + 1] = '\0';
            charIndex = i + 1;
            printf("Word: %s\n", word);
            array[outIndex] = word;
            outIndex++;
        }
    }
    return array;
}


int main(void)
{
    char test[100] = "The quick brown fox jumped over the lazy dog";
    char **split = splitSentence(test);

    for (int i = 0; i < 9; i++) {
        if (
            split[i][0] ==  'a' ||
            split[i][0] ==  'e' ||
            split[i][0] ==  'i' ||
            split[i][0] ==  'o' ||
            split[i][0] ==  'u'
        ) {
            // char *newWord = (char *)malloc(sizeof(char *) * strlen(split[i]) + 2);
            // split[i] = 
            printf("Add ma: %s\n", addMa(split[i]));
        }
    }
    return 0;
}