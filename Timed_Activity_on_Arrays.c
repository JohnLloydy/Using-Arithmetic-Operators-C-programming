#include<stdio.h>

int main()
{
    int x[3][2];
    int id, pin;
    x[0][0]=2001;
    x[0][1]=1234;
    x[1][0]=2002;
    x[1][1]=5678;
    x[2][0]=2003;
    x[2][1]=7890;
    
    printf("ID Number: ");
    scanf("%d", &id);
    printf("PIN CODE: ");
    scanf("%d", &pin); 
    
    if(id==x[0][0], pin==x[0][1])
    {
    printf("You're successfully logged in user 2001");
    }else if(id==x[1][0], pin==x[1][1])
    {
    printf("You're successfully logged in user 2002");
    }else if(id==x[2][0], pin==x[2][1])
    {
    printf("You're successfully logged in user 2003");
    }else
    {
    printf("Invalid ID/PIN!");
    }
    
    return 0;
}