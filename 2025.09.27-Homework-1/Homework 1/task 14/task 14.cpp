#include <cstdio>
int main() {
    int n;
    scanf_s("%d", &n);
    int prefix = n / 10;
    int next = prefix + 1;
    int product = prefix * next;
    printf("%d", product);
    printf("25\n");
    return 0;
}
