#include <stdio.h>

int main()
{
    float eng, fil, math, sci, pe, average, sum;

    printf("Enter marks obtained in Engilsh :");
    scanf("%f", &eng);
    printf("Enter marks obtained in Math :");
    scanf("%f", &fil);
    printf("Enter marks obtained in Science :");
    scanf("%f", &math);
    printf("Enter marks obtained in P.E. :");
    scanf("%f", &sci);
    printf("Enter marks obtained in Filipino :");
    scanf("%f", &pe);

    sum = (eng + fil + math + sci + pe);
    average = (sum / 5);
    printf("average : %0.2f\n", average);

    return 0;
}
