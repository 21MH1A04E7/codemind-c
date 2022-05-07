#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a=0,i,len;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            a++;
        }
    }
    if(a>0)
    printf("Contains %d digit",a);
    else
    printf("Doesn't contain digit");
}