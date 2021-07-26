#include<stdio.h>
int main()
{
    int array1[5]={5,3,2,1,4};
    int array2[5]={8,7,9,6,10};
    int arrayrst[10];
    int i,j,temp;
    for (i=0;i<10;i++)
    {
        if (i<5)
        {
            arrayrst[i]=array1[i];
        }
        else
        {
            arrayrst[i]=array2[i-5];
        }
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            if (arrayrst[i]<arrayrst[j])
            {
                temp=arrayrst[j];
                arrayrst[j]=arrayrst[i];
                arrayrst[i]=temp;
            }
        }
    }
    printf("\nSorted list of elements after alteration:->\n");
    for (i=0;i<10;i++)
    {
        printf("Element number %d :%d\n",i+1,arrayrst[i]);
    }
    return 0;

}