#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            printf(" ");
        }for(j=i-1;j>0;j--){
            printf("%d",j);
        }
        for(j=0;j<i;j++){
            printf("%d",j);
        }printf("
");
    }
}