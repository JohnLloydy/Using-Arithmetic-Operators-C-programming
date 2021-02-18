#include<stdio.h>
int main()
{
    int A,B, ADD, MUL, DIV, SUB ;
    printf("Input any 2 integer: ");
    scanf("%d%d",&A,&B);
    ADD=A+B;
    MUL=A*B;
    DIV=A/B;
    SUB=A-B;
    printf("ADD = %d\n",ADD);
    printf("MUL = %d\n",MUL);
    printf("DIV = %d\n",DIV);
    printf("SUB = %d\n",SUB);
    return 0;
}
