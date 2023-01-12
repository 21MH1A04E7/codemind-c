#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int num=n;
    int c=0;
    int first=0,last=0;
    int count=0;
    while(num){
        num/=10;
        count++;
    }
    int d=pow(10,x);
    int num1=n%d;
    int d2=pow(10,count-x);
     n=n/d2;
    //printf("%d",n);
    printf("%d",abs(num1-n));
}