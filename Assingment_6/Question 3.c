#include<stdio.h>
int main()
{
int i,n, sum=0;
printf("Enter the number \n");
scanf("%d",&n);
while(n)
{
    sum=sum+2*n-1;
    n--;
}
printf("Sum of odd natural number is %d",sum);
return 0;
}
