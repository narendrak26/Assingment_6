#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
        if(f==1)
        {
            printf(" Number is Prime");

        }
        else
        {
            printf("Number is not Prime");
        }
        return 0;
    }
