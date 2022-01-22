#include<stdio.h>
int main()
{
    int num,sum=0,temp,r,f=1,mult;
    scanf("%d",&num);
    temp=num;
    while(num>0){
        r=num%10;
        sum=sum+r;
        mult=f*r;
        f=mult;
        num=num/10;
    }if(mult>sum){
        printf("%d",mult-sum);
    }
}
