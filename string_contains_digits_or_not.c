#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,len;
    scanf("%d",&n);
    while(n--){
        int a=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>=48&&str[i]<=57)
            {
                a++;
            }
        }
        if(a>0){
            printf("Yes");
            printf("
");
        }
        else
        {
            printf("No");
            printf("
");
        }
    }
}