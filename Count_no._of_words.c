#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str); 
    int s=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ')
        s++;
    }printf("%d",s+1);
}