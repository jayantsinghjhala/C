#include<stdio.h>
struct employ
{
    char name[50];
    int bsal;
    int gsal;
};
int main()
{
    struct employ emp[5];
    int i;
    printf("Enter the Name and Basic pay of Employees below:\n ");
    for (i=0;i<=4;i++)
    {
        printf("\n\nEnter the Name of Employee %d :\n",i+1);
        scanf("%s",&emp[i].name);
        printf("Enter the basic pay of employee: \n");
        scanf("%d",&emp[i].bsal);
        emp[i].gsal=emp[i].bsal+(0.52*emp[i].bsal);
        printf("Name of Employe %d is %s\n",i+1,emp[i].name);
        printf("Gross salary of employee is %d \n",emp[i].gsal);
    }
    return 0;
}
