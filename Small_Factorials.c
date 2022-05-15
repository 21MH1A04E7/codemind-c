#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d
",&n);
    while(n--){
        int fact=1;
        scanf("%d",&num);
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }printf("%d
",fact);
    }
}