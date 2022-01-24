#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(j=1;j<=num;j++){
            if(i==j||i+j==num+1)
            printf("%d ",i);
        else printf(" ");
    }printf("
");
}}