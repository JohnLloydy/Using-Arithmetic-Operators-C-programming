#include<stdio.h>
int main(){
    int x, rev = 0, remainder;
    printf("Input any integer: ");
    scanf("%d", &x);
    while (x != 0) {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x /- 10;
    }
    printf("Revised by = %d", rev);
    return 0;
}
