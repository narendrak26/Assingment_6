#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
     printf("Sum of first %d natural number is %d ",n,sum);
    //printf(" %d ",sum);
    return 0;
}
