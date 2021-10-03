#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    scanf_s("%d", &num);
 
    while (i <= num)
    {
        printf("*",i);
        i++;
    }
    return 0;
}