#include <cstdio>
int main() {
    int K, N;
    scanf("%d %d", &K, &N);
    int page = (N - 1) / K + 1;
    int line_on_page = (N - 1) % K + 1;
    printf("%d %d\n", page, line_on_page);
    return 0;
}