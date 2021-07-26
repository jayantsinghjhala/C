#include<stdio.h>
int main()
{
    char str[1000];
    int vc=0,sc=0,dc=0,cc=0,spc=0,i;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';++i)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            vc+=1;   
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            dc+=1;
        }
        else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        {
            cc+=1;
        }
        else if(str[i]==32)
        {
            spc+=1;
        }
        else
        {
            sc+=1;
        }
    }
    printf("\nNo. of vowels in entered text is:%d",vc);
    printf("\nNo. of digits in entered text is:%d",dc);
    printf("\nNo. of special character in entered text is:%d",sc-1);
    printf("\nNo. of consonants in entered text is:%d",cc);
    printf("\nNo. of spaces in entered text is:%d",spc);
    return 0;

}