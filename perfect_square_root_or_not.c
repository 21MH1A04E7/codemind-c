#include<stdio.h>
int main()
{
    int num,temp,i=1,s,sum;
    scanf("%d",&num);
    temp=num;
    while(i<=num/2){
        sum=i*i;
        if(sum==temp){
            s=1;
        }i++;
    }if(s==1){
        printf("True");
    }else{
        printf("False");
    }
}