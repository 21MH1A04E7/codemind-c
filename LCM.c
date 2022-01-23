#include<stdio.h>
int main(){
    int max,i=1,a,b;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    while(i){
    if(max%a==0&&max%b==0){
        printf("%d",max);
        i=0;
    }max++;
    }
    
}