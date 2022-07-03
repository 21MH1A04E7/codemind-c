#include<stdio.h>
int main(){
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=n/2;i--){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n/2;i++){
        printf("%d ",arr[i]);
    }
}