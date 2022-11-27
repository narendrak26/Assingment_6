#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n)
    {
        sum=sum+2*n;
        n--;
    }
    printf("Sum of even natural number is %d",sum);
    return 0;
}
