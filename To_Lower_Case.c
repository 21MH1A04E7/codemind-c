#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,a;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=95)
        {
        printf("%c",(str[i]+32));
            }
            else
            printf("%c",str[i]);
    }
}