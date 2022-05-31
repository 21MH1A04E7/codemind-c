#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[10];
    scanf("%[^
]s",str);
    scanf("%s",str1);
    
    int i,c=0,len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==str1[0]){
            c++;
        }
    }
    if(c>0){
	printf("%d",c);}
	else
	printf("-1");
}