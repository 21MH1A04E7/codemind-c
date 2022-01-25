#include<stdio.h>
int main(){
    int num,i,num1=0,num2=1,nextterms;
    nextterms=num1+num2;
    printf("%d %d",num1,num2);
    scanf("%d",&num);
    for(i=3;i<=num;i++){
        printf(" %d",nextterms);
        num1=num2;
        num2=nextterms;
        nextterms=num1+num2;
    }
}