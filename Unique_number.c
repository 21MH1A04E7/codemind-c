#include<stdio.h>
int main(){
    int a[20]={0};
    int n,r;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(a[r]==1)
        break ;
        a[r]=1;
        n=n/10;
    }if(n>0)
    printf("Not Unique Number");
    else
    printf("Unique Number");
}