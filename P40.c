#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ary,lar;
    printf("Enter the number of elements for array:\n");
    scanf("%d",&n);
    if (ary=calloc(n,sizeof(int)))
    {   
        printf("Enter the Elements:\n");
        for (i=0;i<n;i++)
        {
            printf("Enter element %d :",i+1);
            scanf("%d",(ary+i));
        }
        printf("The entered array is :\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ary+i));
        }
        for (i=0;i<n;i++)
        {
            if (ary[i] < ary[i+1])
            {
                lar=ary[i+1];
            }
            
        }
        printf("\nlargest Element is %d",lar);
        free(ary);

    }
    else
    {
        printf("\nNo memory allocated!!!");
    }


}