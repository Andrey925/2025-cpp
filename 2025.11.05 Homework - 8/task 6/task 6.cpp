#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char* longest = NULL;
    int max_len = 0;

    // Используем strtok для разбиения строки на слова
    char* word = strtok(str, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (len > max_len) {
            max_len = len;
            longest = word;
        }
        word = strtok(NULL, " ");
    }

    printf("%s\n%d\n", longest, max_len);
    return 0;
}
