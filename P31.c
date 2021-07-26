#include <stdio.h>
#include <string.h>
int main()
{
    char array[1000][30];
    char str[30];
    char temp[30];
    int i,n,j;
    printf("Enter the number of elements of Dictionary:->>");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\nEnter %d string element:",i+1);
        scanf("%s",str);
        strcpy(array[i],str);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(strcmp(array[i],array[j])<0)
            {
                strcpy(temp,array[i]);
                strcpy(array[i],array[j]);
                strcpy(array[j],temp);
            }
        }
    }
    printf("\nSorted Dictionary:->");
    for (i=0;i<n;i++)
    {
        printf("\n%s",array[i]);
    }
    return 0;
}