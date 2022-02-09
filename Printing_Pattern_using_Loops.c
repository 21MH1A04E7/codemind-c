#include<stdio.h>
int main()
{
    int i,j,stars,n,end,last,a[100][100];
    scanf("%d",&n);
    end=2*n-1;
    last=end;
    stars=0;
    while(n>0)
    {
        for(i=stars;i<end;i++)
        {
            for(j=stars;j<end;j++)
            {
                if(i==stars||i==end-1||j==stars||j==end-1)
                    a[i][j]=n;
            }
        }n--;
        end--; 
        stars++;
    }for(i=0;i<last;i++)
    {
        for(j=0;j<last;j++)
        {
            printf("%d ",a[i][j]);
        }printf("
");
    }
    
}