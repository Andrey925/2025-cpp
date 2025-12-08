#include<cstdio>
#include<cmath>

struct person
{
	int mat;
	int fis;
	int inf;
};
int main(int argc, char** argv)
{
	struct person person1[100];
	int n = 0;
	scanf("%d", &n);
	char name[100];
	char surname[100];
	for (int i = 0; i < n; i++)
	{
		scanf("%s %s %d %d %d", surname, name, &person1[i].mat, &person1[i].fis, &person1[i].inf);
	}
	double a = 0;
	double b = 0;
	double c = 0;
	for (int i = 0; i < n; i++)
	{
		a += person1[i].mat;
		b += person1[i].fis;
		c += person1[i].inf;
	}
	double cmat = 0;
	double cfis = 0;
	double cinf = 0;
	cmat = a / n;
	cfis = b / n;
	cinf = c / n;
	printf("%g %g %g", cmat, cfis, cinf);
	return 0;
}