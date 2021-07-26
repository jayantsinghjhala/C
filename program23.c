#include<stdio.h>
#include<math.h>
int bitd(int a)
{
    int i=0,m,dec=0;
    while (a!=0)
    {
        m=a%10;
        dec+=m*pow(2,i);
        a/=10;
        i++;
    }
    return dec;
}
int main()
{
    int binary;
    printf("Enter the Binary no. to convert to Decimal: ");
    scanf("%d",&binary);
    printf("REQUIRED DECIMAL FORM:%d",bitd(binary));
    return 0;
}