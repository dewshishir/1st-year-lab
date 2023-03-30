#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("+1/%d ",i);
        sum = sum + 1 / (float)i;
    }
    printf("= %.2f\n", sum);
    return 0;
}