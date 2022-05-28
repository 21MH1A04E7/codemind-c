#include<stdio.h>
int main()
{
    int arr[100],i,j,n,arr1[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(j=0;j<n;j++)
    scanf("%d",&arr1[j]);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]+arr1[i]);
    }
}