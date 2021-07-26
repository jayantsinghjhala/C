#include<stdio.h>
void evenodd(int num)
{
    if(num % 2 == 0)
        printf("%d is a Even Number.", num);
    else
        printf("%d is a Odd Number.", num);
    
}

void fact(int num)
{
    float fact;
    fact=1;
    while(num>0)
    {
        fact*=num;
        num--;
    }
    printf("Factorial is %.2f",fact);
}

void prime(int num)
{
    int i,j;
    
    for (j=2;j<num;j++)
    {
        if(num%j==0)
        {
            break;
        }
    }
    if(j==num)
    {
        printf("%d is a Prime Number.",num);
    }
    else{
        printf("%d is not a Prime Number.",num);
    }
}

void table(int num)
{
    int i,j;
    for (i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
}

void main()
{
    char ch;
    int i,j;
    printf("Make a choice :\n"
    "a for Factorial\n"
    "b to Check if it's Prime\n"
    "c to Check Even or Odd\n"
    "d to Print table of the Number\n");
    scanf("%c",&ch);
    printf("Enter a Number to Perform Operation:");
    scanf("%d",&i);

    switch (ch)
    {
    case 'a':
        fact(i);
        break;
    case 'b':
        prime(i);
        break;
    case 'c':
        evenodd(i);
        break;
    case 'd':
        table(i);
        break;
    
    default:
        break;
    }
    

}