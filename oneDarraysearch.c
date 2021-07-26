#include<stdio.h>
int main()
{
    int array[10];

    int x,i;
    for (i=0;i<10;i++)
    {
        printf("Enter %d Element :\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter the element you want to search:\n");
    scanf("%d",&x);
    for (i=0;i<x;i++)
    {
        if (x==array[i])
        {
            printf("%d found in array at index number %d.\n",x,i);
        }
    }
    return 0;
}