#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    int result;
    if (n < 10) {
        result = 0;
    }
    else {
        result = (n / 10) % 10;
    }
    printf("%d\n", result);
    return 0;
}