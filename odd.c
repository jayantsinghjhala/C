#include <stdio.h>

int main()
{
    int i, n ,x ;
    
    
    printf("Enter the upper limit till odd no. needed: ");
    scanf("%d", &n);

    printf("odd numbers from 1 to %d are: \n", n);

    
    for(i=1; i<=n;i++)
    {
        
        x=(2*i)-1;
        printf("%d \n",x);
        if (x==n){
            break;
        }


    }

    return 0;
}
