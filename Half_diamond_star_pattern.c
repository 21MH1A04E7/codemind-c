#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);if(num>=3&&num<=100){
    for(i=1;i<=num;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }printf("
");
    }
    for(j=num-1;j>=1;j--){
        for(int l=j;l>=1;l--){
            printf("*");
        }printf("
");
    }}else printf("The pattern is not possible");
}