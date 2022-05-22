#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='.')
        printf("[%c]",str[i]);
        else
        printf("%c",str[i]);
    }
}