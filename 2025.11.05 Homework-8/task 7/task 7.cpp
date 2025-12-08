#include <cstdio>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    int is_palindrome = 1; 
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    printf(is_palindrome ? "yes\n" : "no\n");
    return 0;
}