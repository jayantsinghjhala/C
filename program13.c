#include <stdio.h>
void main()
{
    char x;
    printf("Enter anything to identify type:");
    scanf("%c",&x);
    if (x>=65 && x<=90)
    {
        printf("Entered value is a Upper Case Alphabet");
    }
    else if (x>=97 && x<=122)
    {
        printf("Entered value is a Lower Case Alphabet");
    }
    else if (x>=48 && x<=57)
    {
        printf("Entered value is a digit");
    }
    else {
        printf("You entered a special symbol");
    }
}