int palindrom(int n){
    int num=n;
    int sum=0;
    while(n){
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==num)
    return 1;
    return 0;
}
#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,num1,num2;
    scanf("%d",&n);
    num1=n;
    num2=n;
    while(num2){
        num2++;
        if(palindrom(num2)){
            break;
        }
    }
    while(num1){
        num1--;
        if(palindrom(num1)){
            break;
        }
    }
    if(abs(n-num1)==abs(n-num2)){
        printf("%d %d",num1,num2);    }
        else if(abs(n-num1)>abs(n-num2)){
            printf("%d",num2);
        }else{
            printf("%d",num1);
        }
    
}