#include <stdio.h>
int main()
{
    int a = 7;
    float b = 7.6;
    char c= 'a';
    void *p;
    p = &a;
    printf("Integer variable is = %d\n", *(int*)p);
    p = &b;
    printf("Float variable is = %f\n", *(float*)p);
    p=&c;
    printf("Characte variable is = %c\n", *(char*)p);
    return 0;
}
