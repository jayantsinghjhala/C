#include <stdio.h>

float main() {
    float f,ce;
    printf("Enter The temperaturein fahrenhiet: ");
    scanf("%f",&f);
    ce=(float)5/(float)9*(f-32);
    printf("Temperature in Celcius:%f",ce);
    return 0;
}
