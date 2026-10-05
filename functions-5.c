#include<stdio.h>
void pattern (int n)
{
int i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= 2*i-1; j++)
        {printf("*");}
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter the number of lines: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}