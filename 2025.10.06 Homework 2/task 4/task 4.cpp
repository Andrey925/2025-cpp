#include<cstdio>

int main(int argc, char** argv)
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	scanf_s("%d %d %d",  &a1, &b1, &c1);
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	scanf_s("%d %d %d",  &a2, &b2, &c2);
    int k12 = 0;
    int k21 = 0;

    if ((a1 <= a2 && b1 <= b2 && c1 <= c2) ||
        (a1 <= a2 && b1 <= c2 && c1 <= b2) ||
        (a1 <= b2 && b1 <= a2 && c1 <= c2) ||
        (a1 <= b2 && b1 <= c2 && c1 <= a2) ||
        (a1 <= c2 && b1 <= a2 && c1 <= b2) ||
        (a1 <= c2 && b1 <= b2 && c1 <= a2))
    {
        k12 = 1;
    }

    if ((a2 <= a1 && b2 <= b1 && c2 <= c1) ||
        (a2 <= a1 && b2 <= c1 && c2 <= b1) ||
        (a2 <= b1 && b2 <= a1 && c2 <= c1) ||
        (a2 <= b1 && b2 <= c1 && c2 <= a1) ||
        (a2 <= c1 && b2 <= a1 && c2 <= b1) ||
        (a2 <= c1 && b2 <= b1 && c2 <= a1))
    {
        k21 = 1;
    }

    if (k12 && k21) 
    {
        printf("Boxes are equal");
    }
    else if (k12)
    {
        printf("The first box is smaller than the second one");
    }
    else if (k21)
    {
        printf("The first box is larger than the second one");
    }
    else 
    {
        printf("Boxes are incomparable");
    }

    return 0;
}