#include<stdio.h>
int main(){
    int num,i,sum=0;
    scanf("%d",&num);
    int s[num];
    i=0;
    hariom:
    if(i<num){
        scanf("%d",&s[i]);
        sum=sum+s[i];
        i++;
        goto hariom;
    }printf("%d",sum);
    
}