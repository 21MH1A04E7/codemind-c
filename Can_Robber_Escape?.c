#include<stdio.h>
int main(){
    int n,a[20],i,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        if(a[i]%2!=0)
        odd++;
    }if(odd<=2)
    printf("YES");
    else printf("NO");
}