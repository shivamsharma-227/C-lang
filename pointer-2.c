#include <stdio.h>

void printAddress(int *x)
{
    printf("Address of i inside function = %p\n", (void *)x);
}

int main()
{
    int i = 10;

    printf("Address of i in main = %p\n", (void *)&i);

    printAddress(&i);

    return 0;
}