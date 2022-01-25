#include<stdio.h>
int main(){
    int n,num1=0,num2=1,s,nextnumber;
    scanf("%d",&n);
    nextnumber=num1+num2;
    if(n==num1||n==num2)
    {printf("True");}
    else
    for(int i=3;i<=2*n;i++){
        num1=num2;
        num2=nextnumber;
        nextnumber=num1+num2;
        if(nextnumber==n)
        s=1;
    }if(s==1)printf("True");else printf("False");
    
}