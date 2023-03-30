#include <stdio.h>
int main()
{
    int a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("GCD is: %d\n", gcd);
    lcm = (a * b) / gcd;
    printf("LCM is: %d\n", lcm);
    return 0;
}