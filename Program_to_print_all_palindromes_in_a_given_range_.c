#include<stdio.h>
int main(){
   int i, rem, reverse_num, temp,a,b;
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++){
      temp=i;
      reverse_num=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(i==reverse_num)
         printf("%d ",i);
   }
   return 0;
}