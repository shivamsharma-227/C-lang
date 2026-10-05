#include<stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
return n + sum(n-1);
}
int main()
{
    int n , result ;
    printf("enter the value of n: ");
    scanf("%d",&n);
result = sum(n);
printf("sum = %d",result );
return 0;
}
