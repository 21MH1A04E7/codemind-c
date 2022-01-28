#include<stdio.h>
int main(){
    int num,s,j,r,R,sum=0,temp=0;
    scanf("%d",&num);
    s=num*num;
    while(num>0){
        r=num%10;
        sum=sum*10+r;
    num=num/10;
        }j=sum*sum;
    while(j>0){
        R=j%10;
        temp=temp*10+R;
        j=j/10;
    }if(temp==s)printf("True");else printf("False");
}