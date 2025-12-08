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
	double max_x = 0;
	double max_y = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &point1[i].x, &point1[i].y);
	}
	for (int i = 0; i < n; i++)
	{
		max_x += point1[i].x;
		max_y += point1[i].y;
	}
	double center_x = max_x / n;
	double center_y = max_y / n;
	printf("%.15g %.15g", center_x, center_y);
	return 0;
}