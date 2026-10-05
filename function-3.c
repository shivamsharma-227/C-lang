#include<stdio.h>
int main()
{
    float force, mass , gravity = 9.8;
    printf("enter the vlaue of mass " );
    scanf("%f",&mass);
{
    force = mass*gravity ;
    printf("the value of force is %2f \n ",force);
    return 0;
}
}