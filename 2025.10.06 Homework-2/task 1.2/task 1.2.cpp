#include<cstdio>

int main(int argc, char** argv)
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	scanf_s("%d %d", &x1, &y1);
	scanf_s("%d %d", &x2, &y2);
	1 <= x1, y1, x2, y2 <= 8;
	int n = 0;
	n = (x2 > x1) ? (x2 - x1) : (x1 - x2);
	int m = 0;
	m = (y2 > y1) ? (y2 - y1) : (y1 - y2);
	if ((n == 2 && m == 1) || (n == 1 && m == 2))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}