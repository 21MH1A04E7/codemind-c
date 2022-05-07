#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int i,len;
  scanf("%s",str);
  len=strlen(str);
  if(len==10&&str[0]!=0)
  printf("Valid");
  else
  printf("Invalid");
   }