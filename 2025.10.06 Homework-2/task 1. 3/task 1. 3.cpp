#include<cstdio>

int main(int argc, char** argv)
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	scanf_s("%d %d", &x1, &y1);
	scanf_s("%d %d", &x2, &y2);
	int nx = 0;
	nx = ((x2 > x1) ? (x2 - x1) : (x1 - x2));
	int my = 0;
	my = ((y2 > y1) ? (y2 - y1) : (y1 - y2));
	if (x1 == x2 || y1 == y2 || nx == my)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}