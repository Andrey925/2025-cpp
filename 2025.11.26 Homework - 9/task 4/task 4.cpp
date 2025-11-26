#include<cstdio>
#include<cmath>

struct point
{
	int x;
	int y;
};
int main(int argc, char** argv)
{
	int n = 0;
	struct point point1[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &point1[i].x, &point1[i].y);
	}
	double max_p = 0;
	double a;
	double b;
	double c;
	double p = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int m = j + 1; m < n; m ++)
			{
				a = sqrt(pow((point1[j].x - point1[i].x),2) + pow((point1[j].y - point1[i].y),2));
				b = sqrt(pow((point1[m].x - point1[j].x),2) + pow((point1[m].y - point1[j].y),2));
				c = sqrt(pow((point1[m].x - point1[i].x),2) + pow((point1[m].y - point1[i].y),2));
				p = a + b + c;
				if (p > max_p)
				{
					max_p = p;
				}
			}
		}
	}
	printf("%.15g", max_p);
	return 0;
}