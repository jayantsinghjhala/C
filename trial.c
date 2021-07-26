#include<stdio.h>
float f(int, float);
 int main()

{

    int a;

    a = f(10, 3.14);

    printf("%d\n", a);

    return 0;

}

float f(int aa, float bb)
{

    return ((float)aa + bb);

}