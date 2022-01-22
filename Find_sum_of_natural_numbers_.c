#include<stdio.h>
int play(int a);
int main()
{int b;
scanf("%d",&b);

printf("%d",play(b));
    
}
int play(int a){
    int sum=0,i=1;
    while(i<=a){
        sum=sum+i;
    i++;}    return sum;
    
}