
#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num;j>=1;j--){
            printf("%d ",j);
        }printf("
"); 
    }
}
