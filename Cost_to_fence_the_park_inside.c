#include<stdio.h>
int main(){
    int L,B,W,C,area;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    if(L>2*W&&B>2*W){
    area=((L*B)-((L-2*W)*(B-2*W)));
    if(area>0)
    printf("%d",area*C);
    else
    printf("Impossible");}
    else printf("Impossible");
}