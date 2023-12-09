#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long long int factorial(unsigned long long int);

int main()
{
    int depth;
    printf("enter number up to which factorials will be calculated: ");
    scanf("%d", &depth);
    for(int i = 0; i <= depth; i++) {
        printf("%d factorial = %llu\n", i, factorial(i));
    }
    return 42;
}

unsigned long long int factorial(unsigned long long int n) {
    if(n == 0) {
        return 1LL;
    }
    return (factorial(n - 1) * n);
}