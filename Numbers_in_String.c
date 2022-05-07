#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,sum=0,len;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>=48&&str[i]<=57)
        {
            sum=sum+(str[i]-48);
        }
    }printf("%d",sum);
}