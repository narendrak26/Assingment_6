#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum =sum+i*i*i;
    }
    printf("Sum of %d cubes of natural number is %d \n",n,sum);
    return 0;
}
