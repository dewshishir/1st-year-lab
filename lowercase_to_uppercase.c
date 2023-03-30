#include<stdio.h>
#include <ctype.h>
int main()
{
    char a, b;

    printf("Enter a lowercase letter : ");
    scanf("%c", &a);

    b = a - 32;   
    
    // b = toupper(a);
    
    printf("The uppercase letter is : %c\n", b);

    return 0;
}