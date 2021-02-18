#include<stdio.h>


int main()
{
    int type;

    printf("Input any integer: ");
    scanf("%d", &type);
if (type>0)
    printf("The integer is a positive number\n");
else if (type<0)
    printf("The integer is a negative number");


    return 0;
}
