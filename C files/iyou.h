#include <stdlib.h>
#include <string.h>

void iyou(char str[]) {
    char* new_str = malloc(strlen(str) * sizeof(char));
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';
    printf("i %s you\n", new_str);
    free(new_str);
}