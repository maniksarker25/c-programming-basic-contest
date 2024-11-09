/*
Given a number N
. Print ⌊log2(N)⌋
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤1018)
.

Output
Print the answer required above.

 */

#include <stdio.h>

int log2_rec(long long n, int count)
{

    if (n < 2)
    {
        return count;
    }

    return log2_rec(n / 2, count + 1);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    int result = log2_rec(n, 0);

    printf("%d\n", result);

    return 0;
}
