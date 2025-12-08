#include<cstdio>

int main(int argc, char** argv)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	if (x1 == x2)
	{
		if (y1 == 2)
		{
			if (y2 == y1 + 1 || y2 == y1 + 2)
			{
				printf("YES");
			}
			else
			{
				printf("NO");
			}
		}
		else if (y1 > 2 && y1 < 8)
		{
			if (y2 == y1 + 1)
			{
				printf("YES");
			}
			else
			{
				printf("NO");
			}
		}

		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}
	printf("\n");
	return 0;
}