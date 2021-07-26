#include <stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter no. of elements of array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter array elements to sort:-\n\n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d Element :",i+1);
        scanf("%d",&array[i]);
    }
    //descending order sort
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (array[i]>array[j])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("\nSorted list of elements after alteration:->\n");
    for (i=0;i<n;i++)
    {
        printf("Element number %d :%d\n",i+1,array[i]);
    }
    return 0;
}