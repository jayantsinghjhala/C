#include <stdio.h>
int main()
{
    int num1,rst;
 
    printf("Enter a no. to odd or even : ");
    scanf("%d", &num1);
    rst=num1%2;
    if (rst==0)
    {
        printf(" %d is an even number\n", num1);
    }
    else
    {
        printf("%d is an odd number\n", num1);
    }
    return 0;
}