#include <stdlib.h>
#include <string.h>

char** findOcurrences(char* text, char* first, char* second, int* returnSize) {
    // 1. Split text into an array of words (max 500 words since text.length <= 1000)
    char* words[500];
    int wordCount = 0;
    
    char* token = strtok(text, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    // 2. Allocate heap memory for the resulting array of strings
    char** final = (char**)malloc(wordCount * sizeof(char*));
    int n = 0;

    // 3. Check adjacent triples of words
    for (int i = 0; i < wordCount - 2; i++) {
        if (strcmp(words[i], first) == 0 && strcmp(words[i + 1], second) == 0) {
            final[n++] = words[i + 2];
        }
    }

    // 4. Set the output size and return
    *returnSize = n;
    return final;
}