#include <stdio.h>
float main()
{
    float cp,sp,pl,p;
    printf("Enter the cost of the product :");
    scanf("%f",&cp);
    printf("Enter the selling price of the product : ");
    scanf("%f",&sp);
    if(cp>sp)
    {
        printf("You have suffered loss!!\n");
        printf("percentage of loss :\n");
        p=cp-sp;
    }
    else if (cp<sp)
    {
        printf("You have made Profit!!!\n");
        printf("Percentage of profit:\n");
        p=sp-cp;
    }
    else{
        printf("You get no profit niether loss");
    }
    
    pl=(p/cp)*100;
    printf("%2.2f %%",pl);
    return 0;


}