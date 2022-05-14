#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int sum;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            sum=sum+str[i]-48;
        }
    }printf("%d",sum);
} 