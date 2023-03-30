#include <stdio.h>
int main()
{
    int num, count = 0, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num == 1 || num == 0)
        printf("Not prime\n");
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("Prime number\n");
        else
            printf("Not prime\n");
    }

    return 0;
}