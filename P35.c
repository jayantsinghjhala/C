#include<stdio.h>
struct complexno
{
    float a;
    float b;
}c3;

void add(struct complexno c1,struct complexno c2)
{
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    printf("\nthe addition result is :%.2f+%.2fi(iota)",c3.a,c3.b);
}

void sub(struct complexno c1,struct complexno c2)
{
    c3.a=c1.a-c2.a;
    c3.b=c1.b-c2.b;
    if (c3.b>=0){
        printf("\nthe substraction result is :%.2f+%.2fi(iota)",c3.a,c3.b);
    }
    else{
        printf("\nthe substraction result is :%.2f%.2fi(iota)",c3.a,c3.b);
    }
    
}



void mul(struct complexno c1,struct complexno c2)
{
    c3.a=c1.a*c2.a;
    c3.b=c1.b*c2.b;
    printf("\nthe multiplication result is :%.2f+%.2fi(iota)",c3.a,c3.b);
}

int main()
{
    struct complexno x,y;
    char opt;

    printf("Choose the operation for complex numbers:-->>\n"
    "+ for Addition\n"
    "- for Substraction\n"
    "* for Multiplication\n");
    scanf("%c",&opt);

    printf("Enter the complex Number for performing operation: \n");
    printf("Enter the Real part of 1st complex no:");
    scanf("%f",&x.a);
    printf("Enter the imaginary part of 1st complex no:: ");
    scanf("%f",&x.b);

    printf("Enter the Real part of 2nd complex no:");
    scanf("%f",&y.a);
    printf("Enter the imaginary part of 2nd complex no:: ");
    scanf("%f",&y.b);

    
    

    switch (opt)
    {
    case '+':
        add(x,y);
        break;
    case '-':
        sub(x,y);
        break;
    case '*':
        mul(x,y);
        break;
    
    default:
        printf("Choose correct operator!!!");
        break;
    }
    return 0;

}



