#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str); 
    int wh=0,vo=0,di=0,co=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ')
        wh++;
    else
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    vo++;   
    else
    if(str[i]>=48&&str[i]<=57)
    di++;
    else
    co++;
    }
    printf("Vowels: %d",vo);
    printf("
Consonants: %d",co);
    printf("
Digits: %d",di);
    printf("
White spaces: %d",wh);
}