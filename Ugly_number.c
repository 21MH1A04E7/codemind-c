#include<stdio.h>
int main(){
    int n;
    int flage=1;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else
        if(n%3==0){
            n=n/3;
        }else
        if(n%5==0){
            n=n/5;
        }else{
            flage=0;
            printf("Not Ugly Number");
            break;
        }
    }
    if(flage){
        printf("Ugly Number");
    }
}