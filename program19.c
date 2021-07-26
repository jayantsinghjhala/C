#include <stdio.h>
void main()
{
    float a,per,sum=0;
    int i;
    for (i=1;i<=6;i++)
    {
        printf("Enter your %d no. subject mark below(out of 100):\n",i);
        scanf("%f",&a);
        sum+=a;

    }
    per=(sum/600)*100;
    printf("You obtained %.2f %% \n",per);
    if (per>=60)
        printf("with FIRST DIVISION.");
    else if (per>49 && per<=59)
        printf("with SECOND DIVISION.");
    else if (per>40 && per<=49)
        printf("with THIRD DIVISION.");
    else if (per<40)
        printf("SORRY!! YOU ARE FAILED");
    else
        printf("ERROR:PLEASE CHECK AND ENTER CORRECT MARKS!!!");

}