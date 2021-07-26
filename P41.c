#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,roll;
    char name[30];
    char data[1000];
    
    FILE *fp=fopen("student.txt","w");
    if (fp==NULL)
    {
        printf("Error opening File!!");
        exit(1);
    }

    printf("Enter the no. of stdents:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the name of student:");
        scanf("%s",name);
        printf("Enter the Roll Number of student:");
        scanf("%d",&roll);
        fprintf(fp,"Student %d Name:%s\n",i+1,name);
        fprintf(fp,"Roll no. of student %d is %d\n",i+1,roll);
    }
    fclose(fp);
    FILE *sp=fopen("student.txt","r");
    printf("\n\nthe file is fed with following data:");
    fscanf(sp,"%[^Z]",data);
    printf("%s",data);
    fclose(sp);
}