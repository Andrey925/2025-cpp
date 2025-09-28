#include <cstdio>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int n;
	n = a + b - 1;
	int g = n - a;
	int l = n - b;
	printf("%d %d", g, l);
	return 0;
}