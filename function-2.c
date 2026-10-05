#include<stdio.h>

int main()
{
    float celcious , fahrenheit ;
    printf("enter the celcious value: " );
    scanf("%f",&celcious);
    {
fahrenheit = ((9.0/5.0)*celcious + 32);
    }
    printf("the value of fahrenheit is %2f \n  ",fahrenheit);
    return 0;
}