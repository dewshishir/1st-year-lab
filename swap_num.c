#include<stdio.h>
int swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n,m,*p1,*p2;
    printf("Enter two number: ");
    scanf("%d%d",&n,&m);
    p1=&n;
    p2=&m;
    printf("Before swap: \nNumber-1: %d\nNumber-2: %d\n",*p1,*p2);
    swap(p1,p2);
    printf("After swap: \nNumber-1: %d\nNumber-2: %d\n",*p1,*p2);
}