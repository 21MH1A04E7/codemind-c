#include<stdio.h>
int palindrom(int n){
    int num=n;
    int sum=0;
    while(num){
        sum=sum*10+num%10;
        num/=10;
    }
    if(sum==n)
    return 1;
    return 0;
}
int main(){
    int x;
    scanf("%d",&x);
    while(x){
        int n=x;
        int sum=0;
        while(n){
            sum=sum*10+n%10;
            n/=10;
        }
        x+=sum;
        if(palindrom(x)){
            printf("%d",x);
            break;
        }
    }
}