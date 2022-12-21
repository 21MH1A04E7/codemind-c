#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=0,e=n-1;
    while(s<e){
        if(arr[s]==1 && arr[e]==0){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
             s++;e--;
        }
        if(arr[s]==0){
            s++;
        }else
        if(arr[e]==1){
            e--;
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}