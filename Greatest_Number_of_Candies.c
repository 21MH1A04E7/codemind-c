#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maximum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(maximum<arr[i])
        maximum=arr[i];
    }
    int extra_candy;
    scanf("%d",&extra_candy);
    for(int i=0;i<n;i++){
        if((arr[i]+extra_candy)>=maximum){
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}