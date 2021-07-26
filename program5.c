//write a program to find the sum of the digits of a four digit number
#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a four digit no. to calculate sum of digits: \n");
    scanf("%d",&a);
    sum=sum+a%10;
    a/=10;
    sum=sum+a%10;
    a/=10;
    sum=sum+a%10;
    a/=10;
    sum=sum+a%10;
    a/=10;
    printf("Sum=%d\n ",sum);
    printf(sizeof(sum));
    return 0;
}