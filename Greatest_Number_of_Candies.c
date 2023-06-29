#include<stdio.h>
int main(){
    int n,g=0;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]>g){
            g=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if((a[i]+k)>=g){
            printf("True ");
        }
        else
        printf("False ");
    }
    return 0;
}