#include <stdio.h>

int main()

{
    int *n;
    int i;
    i=100;
    (n)=&i;
    (*n)+=200;
    printf("%d\n",*n);
    printf("%d",i);
    return 0;



}