#include <stdio.h>

int main()
{
    int num;
    scanf_s("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("*");
    }
    return 0;
}