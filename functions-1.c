#include<stdio.h>
float average (float a,float b,float c)
{
    float avg;
avg = (a + b + c) / 3;
return avg;
}
int main()
{
    float n1 , n2 , n3, result;
    printf("enter the values: " );    
    scanf("%f %f  %f ",&n1, &n2, &n3 );
    result = average( n1, n2, n3);
    printf("result = %2f \n ",result );
    return 0;
     
}