#include<stdio.h>
void change(int *x)
{
    *x = *x * 10;
}
int main()
{
    int i;
    i = 5;
    printf("before value = %d \n",i);
    change (&i);
    printf("after value = %d \n",i);
    return 0;
}