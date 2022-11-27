#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
   while(n)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits is %d",count);
    return 0;
}
