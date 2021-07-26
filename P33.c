#include <stdio.h>
int main()
{
    int n,i,j,k,count;
    printf("Enter the number of array Elements:");
    scanf("%d",&n);
    int array[n];
    printf("Enters the array elements below:->\n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++)
    {
        count=0;
        for (j=0;j<n;j++)
        {
            if (array[i]==array[j])
            {
                count+=1;
                if (count>1)
                {
                    n-=1;
                    for (k=j;k<n;k++)
                    {
                        array[k]=array[k+1];
                    }
                }
            }
        }
    }
    printf("Altered array elements after removing duplicates are below\n");
    for (i=0;i<n;i++)
    {
        printf("%d  ",array[i]);   
    }
    return 0;
}
