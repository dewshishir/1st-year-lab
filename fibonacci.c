#include <stdio.h>
int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    printf("Enter range: ");
    scanf("%d", &n);
    printf("Fibonacci series in givens range: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}