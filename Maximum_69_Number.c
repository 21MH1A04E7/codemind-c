#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int a,i;
    scanf("%s",arr);
    a=strlen(arr);
    for(i=0;i<a;i++)
    {
        if(arr[i]%6==0)
        {
            arr[i]='9';
            break;
        }
    }printf("%s",arr);
}
