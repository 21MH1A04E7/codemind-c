#include<stdio.h>
int digit(int n){
    int sum=0;
    while(n){
        int r=n%10;
        sum+=r*r;
        n/=10;
    }
    return sum;
}
int check(int n){
    int ans=digit(n);
    if(ans==1){
        return 1;
    }
    while(ans){
        if(ans==1||ans==7){
            return 1;
        }
        if(ans<10){
            return 0;
        }
        ans=digit(ans);
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(check(n)){
        printf("True");
    }else{
        printf("False");
    }
    
}