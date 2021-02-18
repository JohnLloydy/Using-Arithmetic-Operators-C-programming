#include<stdio.h>

int main()
{
    int name, age;
    printf("Name: ");
    scanf("%s",&name);
    printf("Age: ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You are eligible for Voting");
    }
    else
    {
        printf("You are not eligible for voting\n");
    }

    return 0;
}

