#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;
    printf("%d\n", hundreds + tens + units);
    return 0;
}