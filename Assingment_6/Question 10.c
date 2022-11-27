#include<stdio.h>
int main()
{
    int n,x,r;
    printf("Enter the number\n ");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        x=(x*10)+r;
        n=n/10;
    }
    printf("Revers of a number is %d",x);
    return 0;
}
