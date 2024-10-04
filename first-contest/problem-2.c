/*
You will be given two integers A and B. You need to give output their multiplication.
*/
#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long int a, b;
    scanf("%ld %ld", &a, &b);
    long long multiply = a * b;
    printf("%lld", multiply);
    return 0;
}
