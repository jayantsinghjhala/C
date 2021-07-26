#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char str[100];
    char chr;
    int i,pnt;
    printf("Enter the string for alteration:");
    scanf("%s",str);
    printf("\nEnter the character who's last occurance to change:");
    chr=getch();
    putch(chr);
    for (i=0;i<=strlen(str)-1;i++)
    {
        if (str[i]==chr)
        {
            pnt=i;
        }
    }
    printf("\n\nEnter the character you want to replace with:");
    chr=getch();
    putch(chr);
    str[pnt]=chr;
    printf("\n\nAltered string:%s",str);
    return 0;
}