#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int result = sum(5, 3);

    if (result == 8)
        printf("Test passed\n");
    else
        printf("Test failed\n");

    return 0;
}
