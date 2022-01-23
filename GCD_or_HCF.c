#include<stdio.h>
int main(){
    int min,a,b,i=1;
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    while(i){
        if(a%min==0&&b%min==0){
            printf("%d",min);
            i=0;
        }min--;
    }
}