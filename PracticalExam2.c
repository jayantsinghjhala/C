#include <stdio.h>

struct Employee
{
    char    emp_name[30];
    int     emp_id;
    float   basic_pay;
    char emp_designation[100];
};

void calculate_salary(struct Employee emp)
{
    float da,hra;
    da=0.75*(emp.basic_pay);
    hra=0.25*(emp.basic_pay);
    printf("\nTotal Salary :%8.2f",emp.basic_pay+ da + hra);
}

struct Employee getdata(struct Employee emp)
{
    printf("\nEnter details :\n");
    printf("Enter Name of Employee:");
    scanf("%s",&emp.emp_name);
    printf("Enter the ID:");
    scanf("%d",&emp.emp_id);
    printf("Enter Designation:");
    scanf("%s",&emp.emp_designation);
    printf("Enter Basic Pay:");
    scanf("%f",&emp.basic_pay);

    return emp;   
}

void putdata(struct Employee emp)
{
    printf("\nEntered detail is:\n");
    printf("Name: %s\n"   ,emp.emp_name);
    printf("Id: %d\n"     ,emp.emp_id);
    printf("Basic Salary: %f\n",emp.basic_pay);
    calculate_salary(emp);
}




 
void main()
{
    struct Employee x,stp;
    stp=getdata(x);
    putdata(stp);
}