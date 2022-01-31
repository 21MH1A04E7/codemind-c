#include<stdio.h>
#include<math.h>
int main(){
    int n,r,temp,i=0,sum=0,R,SOPEP=0;
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        i++;
        n=n/10;
    }lable:
    if(sum>0){
    for(int j=1;j<=i;j++){
        R=sum%10;
        SOPEP=SOPEP+pow(R,j);
        sum=sum/10;}
        goto lable;
    }if(SOPEP==temp)printf("True");else
    printf("False");
}