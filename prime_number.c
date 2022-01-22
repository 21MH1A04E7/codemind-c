#include<stdio.h>
int main()
{
    int i,num,c;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0){
            c=1;}
    }
    if(c==1){
        printf("not a prime");
    }else
    {
        printf("prime");
    }
}