#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,j,flag;
    printf("Enter a String to check if It's palindrome:");
    scanf("%s",str);
    j=strlen(str)-1;
    for (i=0;i<strlen(str)-1;i++)
    {
        if (str[i]==str[j])
        {
            flag=1;
            j--;
        }
        else
        {
            flag=0; 
            break;
        }    
    }
    if (flag==0)
    {
        printf("Entered string is not Palindrome.");
    }
    else if(flag==1)
    {
        printf("Entered string is Palindrome.");
    }
    return 0;

}