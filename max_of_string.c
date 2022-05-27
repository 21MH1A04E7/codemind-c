#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    scanf("%[^
]s",str);
    ch=str[0];
    for(int i=1;i<strlen(str);i++){
    if(ch>str[i])
        ch;
    else
       ch=str[i];
    }printf("%c",ch);
}