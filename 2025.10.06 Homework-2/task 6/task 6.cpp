#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0)
	{
		printf("-1\n");
	}
	if (a == 0)
	{
		if (b == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
			double x1 = 0;
			x1 = (- c * 1.0) / b;
			printf("%.6lf", x1);
		}
		return 0;
	}
	int d = 0;
	d = b * b - 4 * a * c;
	if (d < 0)
	{
		printf("0");
	}
	else if (d == 0)
	{
		printf("1\n");
		double x2 = 0;
		x2 = -b / (2.0 * a);
		printf("%.6lf", x2);
	}
	if (d > 0)
	{
		printf("2\n");
		double x3 = 0;
		double x4 = 0;
		x3 = ( - b + sqrt(d)) / (2.0 * a);
		x4 = (-b - sqrt(d)) / (2.0 * a);
		printf("%.6lf\n", x3);
		printf("%.6lf\n", x4);

	}
	return 0;
}