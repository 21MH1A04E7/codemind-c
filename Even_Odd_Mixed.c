
#include<stdio.h>
int main(){
    int n,a=0,b=0,r;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
        if(r%2==0)
        a++;
        else
        if(r%2!=0)
        b++;
    }if(a==0)
    printf("Odd");
    else
    if(b==0)
    printf("Even");
    else
    printf("Mixed");
}
