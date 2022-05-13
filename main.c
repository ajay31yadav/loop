#include<stdio.h>
int main()
{
    int n,rem,last,sum;
    printf("enter an integer:");
    scanf("%d",&n);
    rem=n%10;
    while(n>0)
    {
        sum=n%10;
        last=n/10;
        n=n-1;
    }
    printf("sum of first and last digit is:%d %d",rem+n);
    return 0;
}
