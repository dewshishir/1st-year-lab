#include<stdio.h>
int main()
{
    int m=0,n=20;
    int *ptr=&m;
    n=*ptr;
    printf(" %d\n",n);
    return 0;
}
