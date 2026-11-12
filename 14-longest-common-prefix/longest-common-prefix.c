#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    // Iterate through each character index of the first string
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char currentChar = strs[0][i];

        // Compare this character with the same position in all other strings
        for (int j = 1; j < strsSize; j++) {
            // Stop if we reach the end of any string or find a mismatch
            if (strs[j][i] == '\0' || strs[j][i] != currentChar) {
                char* prefix = (char*)malloc((i + 1) * sizeof(char));
                strncpy(prefix, strs[0], i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }

    // The entire first string is the common prefix
    int len = strlen(strs[0]);
    char* prefix = (char*)malloc((len + 1) * sizeof(char));
    strcpy(prefix, strs[0]);
    return prefix;
}