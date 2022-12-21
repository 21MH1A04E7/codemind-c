#include<stdio.h>
int main(){
    int n,i,j,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            c++;
            arr[i]=0;
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<c;j++){
            if(arr[i+1]==0){
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}