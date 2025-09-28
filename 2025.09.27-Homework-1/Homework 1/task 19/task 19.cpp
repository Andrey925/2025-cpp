#include <cstdio>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a % b == 0 || b % a == 0) {
        printf("1\n");
    }
    else {
        printf("2\n");
    }
    return 0;
}
