#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    long num1=0,num2=0;
   for(int i=0;i<strlen(str1);i++){
       num1=num1*10+str1[i]-48;
   }for(int i=0;i<strlen(str2);i++){
       num2=num2*10+str2[i]-48;
   }
   printf("%ld",num1*num2);
}