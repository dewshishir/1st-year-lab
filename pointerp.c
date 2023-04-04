#include<stdio.h>
int main()
{
int a[5]={10,56,89,34,50};
int *ptr;
ptr=a;
printf("%d\n", ++*ptr);//11
printf("%d\n", *++ptr);//56
printf("%d\n", *ptr++);//56
printf("%d\n", (*++ptr)++);//34
printf("%d\n", ++(*ptr));//36
printf("%d\n", (*ptr)++);//36



return 0;

}
