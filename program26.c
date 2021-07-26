#include<stdio.h>
void cbv(int a, int b);
void cbr(int *,int *);
int main()
{
    int a,b,choice;
    printf("Enter two variable[1 & 2] value to swap:");
    scanf("%d %d",&a,&b);
    printf("\nPlease choose prefered method by entering [1 or 2]");
    printf("\n1.Call By Value\n2.Call By Reference\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        cbv(a,b);
        break;
    case 2:
        cbr(&a,&b);
        break;
    default:
        printf("Error!! make valid choice...");
        break;
    }
    printf("\n1st Entered variable value after swap:%d\n2nd Entered variable value after swap:%d",a,b);
}
void cbv(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n1st variable value:%d\n2nd variable value:%d",a,b);
}
void cbr(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n1st variable value:%d\n2nd variable value:%d",*a,*b);

}