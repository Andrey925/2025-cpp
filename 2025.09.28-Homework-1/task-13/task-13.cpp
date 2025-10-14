#include<cstdio>

int main(int ardc, char** argv)
{
	int k = 0;
	int m = 0;
	scanf_s("%d %d", &k,&m);
	int l = 0;
	l = (m - 1) / k + 1;
	int cac = 0;
	cac = (k - 1) % m + 1;
	printf("%d %d", l,cac);

	return 0;
}
