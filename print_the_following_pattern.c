#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%c ",i+64);
        }printf("
");
    }
}