#include <stdio.h>  

int main(int argc, char** argv)
{
    int max1 = 0;
    int max2 = 0;
    int number = 0;
    scanf_s("%d %d", &max1, &max2);

    while (1) 
    {
        scanf_s("%d", &number);

        if (number == 0)
            break;

        if (number > max1) {
            max2 = max1;  
            max1 = number;
        }
        else if (number > max2 && number != max1) {
            max2 = number;
        }
    }

    printf("%d", max2);
    

    return 0;
}