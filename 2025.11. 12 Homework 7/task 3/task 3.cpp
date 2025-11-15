#include <cstdio>

bool election(bool x, bool y, bool z)
int main(int argc, char** argv)
{
    int x, y, z;
    scanf_s("%d %d %d", &x, &y, &z);
    printf("%d\n", election(x, y, z));
    return 0;
}
bool election(bool x, bool y, bool z)
{
    return (x + y + z) >= 2;
}
