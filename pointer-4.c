#include<stdio.h>
void calculate (int a, int b, int *sum, float *average)
{
*sum = a + b;
*average = *sum / 2.0;
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    int sum ;
    float average;
    calculate(a, b, &sum, &average );
    printf("the value of sum is %d \n",sum);
    printf("the value of average is %2f \n",average);
    return 0;

}

