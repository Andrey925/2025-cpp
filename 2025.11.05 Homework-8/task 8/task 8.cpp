#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char s[1000];
    scanf("%s", s);
    int count[128] = { 0 }; 
    for (int i = 0; s[i]; i++)
        count[s[i]]++;
    for (int i = 0; i < 128; i++)
        if (count[i] == 2)
        {
            printf("%c\n", i);
            break;
        }
    return 0;
}